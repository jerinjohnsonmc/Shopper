#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qsqltablemodel.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>
#include <QObject>
#include <QFile>




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // QMainWindow::showFullScreen();
    ui->tableView->resizeColumnsToContents();
    QMainWindow::showMaximized();
    dbsetup();
    update_view();

    connect(&addstock,SIGNAL(stock_added()),this,SLOT(update_view()));
    connect(&mysupp,SIGNAL(supp_added()),this,SLOT(update_view()));
    connect(&deletebutton,SIGNAL(delete_confirmation()),this,SLOT(delete_row()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    newpurchase mypurchase;
    connect(&mypurchase,SIGNAL(purchase_added()),this,SLOT(update_view()));
    mypurchase.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    addstock.exec();
}

void MainWindow::on_pushButton_8_clicked()
{
    newsale mysale;
    connect(&mysale,SIGNAL(sale_added()),this,SLOT(update_view()));
    mysale.exec();
}

void MainWindow::on_pushButton_10_clicked()
{
    mysupp.exec();
}
void MainWindow::update_view()
{
    QSqlTableModel *model = new QSqlTableModel;
    model->setTable("product");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    while(model->canFetchMore())
        model->fetchMore();
    ui->tableView->setModel(model);


    QSqlTableModel *sup_model = new QSqlTableModel;
    sup_model->setTable("supplier");
    sup_model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    sup_model->select();
    while(sup_model->canFetchMore())
        sup_model->fetchMore();
    ui->tableView_3->setModel(sup_model);


    QSqlTableModel *stockmodel = new QSqlTableModel;
    stockmodel->setTable("stock_transaction");
    stockmodel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    stockmodel->setFilter("supplier != 'sale'");
    stockmodel->select();
    while(stockmodel->canFetchMore())
        stockmodel->fetchMore();
    ui->tableView_2->setModel(stockmodel);


    QSqlTableModel *salemodel = new QSqlTableModel;
    salemodel->setTable("stock_transaction");
    salemodel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    salemodel->setFilter("supplier = 'sale'");
    salemodel->select();
    while(salemodel->canFetchMore())
        salemodel->fetchMore();
    ui->tableView_4->setModel(salemodel);


    ui->pushButton_5->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    QItemSelectionModel *select =ui->tableView->selectionModel();
    QItemSelectionModel *sup_select =ui->tableView_3->selectionModel();
    connect(select,&QItemSelectionModel::currentChanged,this,&MainWindow::enable_buttons);
    connect(sup_select,&QItemSelectionModel::currentChanged,this,&MainWindow::enablesupp_buttons);
    ui->tableView->resizeColumnsToContents();
    ui->tableView_2->resizeColumnsToContents();
    ui->tableView_3->resizeColumnsToContents();
    ui->tableView_4->resizeColumnsToContents();


}
void MainWindow::dbsetup()
{
    QFile dbfile("shop.db");
    if(!dbfile.open(QIODevice::ReadWrite))
    {
        qDebug() << "error creating or opening db file";
    }


    shopdb=QSqlDatabase::addDatabase("QSQLITE");
    shopdb.setDatabaseName("shop.db");
    if(!shopdb.open())
    {
        qDebug() << "Error: connection with database fail";
    }
    else
    {
        qDebug() << "Database: connection ok"<< shopdb.connectionName();
    }
    if (!shopdb.tables().contains(QLatin1String("product")))
    {
        QSqlQuery query;

        query.prepare("create table product(id integer,description text,code text PRIMARY KEY,minstock integer,price double,date_added DATE,expiry INTEGER,cur_stock INTEGER)");

        if(!query.exec())
        {
            qDebug() << "error creating table product";
        }
        query.finish();
        query.prepare("create table stock_transaction(id INTEGER PRIMARY KEY AUTOINCREMENT,code TEXT,stock INTEGER,mfd DATE,supplier TEXT,invoice TEXT,cost DOUBLE,date_time DATETIME)");
        if(!query.exec())
        {
            qDebug() << "error creating table stock_transaction"<< query.lastError()<<query.executedQuery();
        }
        query.finish();
        query.prepare("CREATE TABLE supplier(id INTEGER,supplier_name TEXT PRIMARY KEY,address TEXT,phone TEXT,date_added DATE)");
        if(!query.exec())
        {
            qDebug() << "error creating table supplier"<< query.lastError()<<query.executedQuery();
        }
        query.finish();
        query.prepare("CREATE TABLE inventory(code TEXT,batch TEXT PRIMARY KEY,quantity INTEGER)");
        if(!query.exec())
        {
            qDebug() << "error creating table inventory"<< query.lastError()<<query.executedQuery();
        }
        query.finish();
    }

}

void MainWindow::on_pushButton_5_clicked()
{

    deletebutton.exec();

}
void MainWindow::delete_row()
{
    QItemSelectionModel *select =ui->tableView->selectionModel();
    QString code = select->selectedRows(2).value(0).data().toString();

    QSqlQuery query;

    query.prepare("DELETE FROM product WHERE code = '"+code+"'");

    if(!query.exec())
    {
        qDebug() << "error deleting product";
    }
    update_view();

}
void MainWindow::enable_buttons()
{
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_4->setEnabled(true);


}
void MainWindow::enablesupp_buttons()
{
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);


}

void MainWindow::on_pushButton_4_clicked()
{
    QItemSelectionModel *select =ui->tableView->selectionModel();
    QString code = select->selectedRows(2).value(0).data().toString();
    Edit_Dialog editdialog (code);
    connect(&editdialog,SIGNAL(stock_edited()),this,SLOT(update_view()));
    editdialog.exec();
}

void MainWindow::on_pushButton_12_clicked()
{
    QItemSelectionModel *supselect =ui->tableView_3->selectionModel();
    QString name = supselect->selectedRows(1).value(0).data().toString();


    Editsupp_Dialog editsuppdialog (name);
    connect(&editsuppdialog,SIGNAL(supp_edited()),this,SLOT(update_view()));
    editsuppdialog.exec();
}

void MainWindow::on_pushButton_11_clicked()
{
    QItemSelectionModel *supselect =ui->tableView_3->selectionModel();
    QString name = supselect->selectedRows(1).value(0).data().toString();
    Del_supp_Dialog delsuppdialog (name);
    connect(&delsuppdialog,SIGNAL(delete_confirmation()),this,SLOT(update_view()));
    delsuppdialog.exec();
}
