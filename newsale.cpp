#include "newsale.h"
#include "ui_newsale.h"
#include <QtDebug>
#include <qtablewidget.h>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QCompleter>
#include <QObject>
#include <QWidget>
#include <QDate>

newsale::newsale(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newsale)
{
    ui->setupUi(this);
    QSqlQuery qry;

    qry.prepare("select description from product");
    if(!qry.exec())
    {
        qDebug() << "error getting description from product";
    }
    QStringList items;
    while(qry.next())
    {
        items <<qry.value(0).toString();
    }
    QCompleter *completer =new QCompleter(items,this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit_des->setCompleter(completer);
    connect(completer,QOverload<const QString&>::of(&QCompleter::activated),this, [&](const QString& text)
    {
        newsale::clear(text);
    });

}

newsale::~newsale()
{
    delete ui;
}



void newsale::on_lineEdit_sale_returnPressed()
{
    if(!ui->lineEdit_sale->text().isEmpty())
    {
        QSqlQuery queryinv;
        queryinv.prepare("SELECT quantity,batch FROM inventory WHERE quantity != 0 AND code ='"+ui->lineEdit_sale->text()+"' LIMIT 1");
        if(!queryinv.exec())
        {
            qDebug() << "error getting qty";
        }
        int qty=0;
        if (queryinv.next())
        {
            bool ok;
            qty=queryinv.value(0).toInt(&ok);
            cur_batch=queryinv.value(1).toString();
            if (!ok)
            {
                qDebug() << "shit";
            }

        }
        qDebug() <<cur_batch;
        Quan_Dialog quandialog(qty);
        connect(&quandialog,SIGNAL(quantity(int)),this,SLOT(code(int)));
        quandialog.exec();
    }
    else
    {
        Errdialog myerror("please provide code or description" );
        myerror.exec();
    }

}
void newsale::saveDataIntoTable(QString item,double price,int quantity,QString code)
{
    double rupee =price*quantity*1.00;

    QString mrp= QString::number(rupee,'f',2);
    QString qty= QString::number(quantity);
    QString prc= QString::number(price);

    if (!ui->tableWidget)
        return;

    const int currentRow = ui->tableWidget->rowCount();
    ui->tableWidget->setRowCount(currentRow + 1);

    ui->tableWidget->setItem(currentRow, 0, new QTableWidgetItem(item));
    ui->tableWidget->setItem(currentRow, 1, new QTableWidgetItem(prc));
    ui->tableWidget->setItem(currentRow, 2, new QTableWidgetItem(qty));
    ui->tableWidget->setItem(currentRow, 3, new QTableWidgetItem(mrp));
    ui->tableWidget->setItem(currentRow, 4, new QTableWidgetItem(code));
    double total=ui->label_3->text().toDouble();
    total = total+rupee;
    ui->label_3->setText(QString::number(total,'f',2));
    ui->tableWidget->resizeColumnsToContents();

}
void newsale::clear(QString item)
{
    if(!item.isEmpty())
    {
        if(!ui->lineEdit_des->text().isEmpty())
        {
            QSqlQuery querycode;
            QString code;
            querycode.prepare("SELECT code FROM product WHERE description = '"+ui->lineEdit_des->text()+"'");
            if(!querycode.exec())
            {
                qDebug() << "error getting code";
            }

            if (querycode.next())
            {
                code=querycode.value(0).toString();

            }
            qDebug() << code;
            QSqlQuery queryinv;
            queryinv.prepare("SELECT quantity,batch FROM inventory WHERE quantity != 0 AND code ='"+code+"' LIMIT 1");
            if(!queryinv.exec())
            {
                qDebug() << "error getting qty";
            }
            int qty=0;
            if (queryinv.next())
            {
                bool ok;
                qty=queryinv.value(0).toInt(&ok);
                cur_batch=queryinv.value(1).toString();

                if (!ok)
                {
                    qDebug() << "shit";
                }

            }
            qDebug() << cur_batch;
            Quan_Dialog quandialog(qty);
            connect(&quandialog,SIGNAL(quantity(int)),this,SLOT(descr(int)));
            quandialog.exec();

        }
        else
        {
            Errdialog myerror("please provide code or description" );
            myerror.exec();
        }
    }
}

void newsale::descr(int q)
{
    QSqlQuery qry;
    qry.prepare("select * from product where description='"+ui->lineEdit_des->text()+"'");
    if(!qry.exec())
    {
        qDebug() << "error getting table product";
    }
    if (qry.next())
    {
        QString result=qry.value(1).toString();
        double price= qry.value(4).toDouble();
        QString itemco=qry.value(2).toString();
        saveDataIntoTable(result,price,q,itemco);
        ui->lineEdit_des->clear();
    }
}
void newsale::on_pushButton_clicked()
{

    QItemSelectionModel *select =ui->tableWidget->selectionModel();
    int row = select->selectedRows().takeFirst().row();
    double rupee=ui->tableWidget->item(row,3)->text().toDouble();
    ui->tableWidget->removeRow(row);
    double total=ui->label_3->text().toDouble();
    total = total-rupee;
    ui->label_3->setText(QString::number(total,'f',2));


}

void newsale::on_lineEdit_des_returnPressed()
{
}
void newsale::code(int q)
{
    QSqlQuery qry;
    qry.prepare("select * from product where code="+ui->lineEdit_sale->text());
    if(!qry.exec())
    {
        qDebug() << "error getting table product";
    }
    if (qry.next())
    {
        QString result=qry.value(1).toString();
        double price= qry.value(4).toDouble();
        QString itemco=qry.value(2).toString();
        saveDataIntoTable(result,price,q,itemco);

    }
    ui->lineEdit_sale->clear();
}


void newsale::on_pushButton_2_clicked()
{

    QSqlQuery queryinv;
    queryinv.prepare("SELECT MAX(Id),invoice FROM stock_transaction where supplier='sale'");
    if(!queryinv.exec())
    {
        qDebug() << "error getting invid";
    }
    int invid=0;
    if (queryinv.next())
    {
        bool ok;
        invid=queryinv.value(1).toInt(&ok)+1;

        if (!ok)
        {

            qDebug() << "shit";

        }
    }

    QString datetime= QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    QString date= QDate::currentDate().toString("yyyy-MM-dd");
    int numrow=ui->tableWidget->rowCount();

    for (int i = 0; i < numrow; i++)
    {

        QSqlQuery query;
        query.prepare("SELECT MAX(Id) FROM stock_transaction");
        if(!query.exec())
        {
            qDebug() << "error getting id";
        }
        int id=0 ;
        if (query.next())
        {
            id=query.value(0).toInt()+1;
        }

        QString coder=ui->tableWidget->item(i,4)->text();
        QString qua=ui->tableWidget->item(i,2)->text();

        QSqlQuery querysale;
        querysale.prepare("INSERT INTO stock_transaction(id,code,stock,mfd,supplier,invoice,cost,date_time) VALUES(:id,:code,:stock,:mfd,:supplier,:invoice,:cost,:date_time)");

        querysale.bindValue(":id", id);
        querysale.bindValue(":code",coder);
        querysale.bindValue(":stock", qua.toInt());
        querysale.bindValue(":mfd",date);
        querysale.bindValue(":supplier", "sale");
        querysale.bindValue(":invoice", invid);
        querysale.bindValue(":cost", id);
        querysale.bindValue(":date_time", datetime);


        if(!querysale.exec())
        {
            qDebug() << "error recording sale";
        }
        QSqlQuery queryinv;
        queryinv.prepare("UPDATE inventory SET quantity = IFNULL(quantity,0)- :qty WHERE batch = :batch");
        queryinv.bindValue(":batch", cur_batch);
        queryinv.bindValue(":qty", qua.toInt());
        if(!queryinv.exec())
        {
            qDebug() << "error updating inventory qty";
        }

        QSqlQuery queryprosale;

        queryprosale.prepare("UPDATE product SET cur_stock = IFNULL(cur_stock,0) - :qty WHERE code = :code");
        queryprosale.bindValue(":code", coder);
        queryprosale.bindValue(":qty", qua.toInt());

        if(!queryprosale.exec())
        {
            qDebug() << "error updating stock on product"<<queryprosale.lastError()<<queryprosale.executedQuery();
        }

    }
    emit this->sale_added();
    close();
}




