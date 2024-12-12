#include "newpurchase.h"
#include "ui_newpurchase.h"
#include <QtDebug>
#include <qtablewidget.h>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QCompleter>
#include <QObject>
#include <QWidget>
#include <QDate>

newpurchase::newpurchase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newpurchase)
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
        newpurchase::clear(text);
    });

    QSqlQuery supqry;
    supqry.prepare("select supplier_name from supplier");
    if(!supqry.exec())
    {
        qDebug() << "error getting suppliername from supplier";
    }
    QStringList supitems;
    while(supqry.next())
    {
        supitems <<supqry.value(0).toString();
    }
    QCompleter *supcompleter =new QCompleter(supitems,this);
    supcompleter->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit_sup->setCompleter(supcompleter);
}

newpurchase::~newpurchase()
{
    delete ui;
}

void newpurchase::on_lineEdit_sale_returnPressed()
{
    if(!ui->lineEdit_sale->text().isEmpty() && !ui->lineEdit_sup->text().isEmpty() && !ui->lineEdit_inv->text().isEmpty())
    {
        pur_dialog purdialog;
        connect(&purdialog,SIGNAL(purdetails(QString)),this,SLOT(code(QString)));
        purdialog.exec();
    }
    else
    {

        Errdialog myerror("please provide supplier and invoice" );
        myerror.exec();
    }
}
void newpurchase::saveDataIntoTable(QString item,double price,int quantity,QString code,QString date)
{
    double rupee =price*quantity*1.00;

    QString mrp= QString::number(rupee,'f',2);
    QString qty= QString::number(quantity);
    QString prc= QString::number(price);
    // QString kod= QString::number(code);

    if (!ui->tableWidget)
        return;

    const int currentRow = ui->tableWidget->rowCount();
    ui->tableWidget->setRowCount(currentRow + 1);

    ui->tableWidget->setItem(currentRow, 0, new QTableWidgetItem(item));
    ui->tableWidget->setItem(currentRow, 1, new QTableWidgetItem(prc));
    ui->tableWidget->setItem(currentRow, 2, new QTableWidgetItem(qty));
    ui->tableWidget->setItem(currentRow, 3, new QTableWidgetItem(mrp));
    ui->tableWidget->setItem(currentRow, 4, new QTableWidgetItem(code));
    ui->tableWidget->setItem(currentRow, 5, new QTableWidgetItem(date));

    double total=ui->label_3->text().toDouble();
    total = total+rupee;
    ui->label_3->setText(QString::number(total,'f',2));



}
void newpurchase::clear(QString item)
{
    if(!item.isEmpty())
    {
        if(!ui->lineEdit_des->text().isEmpty() && !ui->lineEdit_sup->text().isEmpty() && !ui->lineEdit_inv->text().isEmpty())
        {
            pur_dialog purdialog;
            connect(&purdialog,SIGNAL(purdetails(QString)),this,SLOT(descr(QString)));
            purdialog.exec();

        }
        else
        {

            Errdialog myerror("please provide supplier and invoice" );
            myerror.exec();
        }
    }
}

void newpurchase::descr(QString q)
{
    QStringList elements = q.split(':');
    QSqlQuery qry;
    qry.prepare("select * from product where description='"+ui->lineEdit_des->text()+"'");
    if(!qry.exec())
    {
        qDebug() << "error getting table product";
    }
    if (qry.next())
    {
        QString result=qry.value(1).toString();
        double cost= elements[2].toDouble();
        QString itemco=qry.value(2).toString();
        int quan=elements[0].toInt();
        QString mfd=elements[1];



        saveDataIntoTable(result,cost,quan,itemco,mfd);

        ui->lineEdit_des->clear();
    }
}
void newpurchase::on_pushButton_clicked()
{

    QItemSelectionModel *select =ui->tableWidget->selectionModel();
    int row = select->selectedRows().takeFirst().row();
    double rupee=ui->tableWidget->item(row,3)->text().toDouble();
    ui->tableWidget->removeRow(row);
    double total=ui->label_3->text().toDouble();
    total = total-rupee;
    ui->label_3->setText(QString::number(total,'f',2));


}

void newpurchase::on_lineEdit_des_returnPressed()
{
}
void newpurchase::code(QString q)
{

    QStringList elements = q.split(':');

    QSqlQuery qry;
    qry.prepare("select * from product where code="+ui->lineEdit_sale->text());
    if(!qry.exec())
    {
        qDebug() << "error getting table product";
    }
    if (qry.next())
    {
        QString result=qry.value(1).toString();
        double cost= elements[2].toDouble();
        QString itemco=qry.value(2).toString();
        int quan=elements[0].toInt();
        QString mfd=elements[1];


        saveDataIntoTable(result,cost,quan,itemco,mfd);

    }


    ui->lineEdit_sale->clear();
}




void newpurchase::on_pushButton_2_clicked()
{

    //QString date= QDate::currentDate().toString("yyyy-MM-dd");
    QString datetime= QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    QString supplier=ui->lineEdit_sup->text();
    QString invoice=ui->lineEdit_inv->text();
    int numrow=ui->tableWidget->rowCount();
    //qDebug() << numrow;

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
        double rate=ui->tableWidget->item(i,1)->text().toDouble();
        QString date=ui->tableWidget->item(i,5)->text();
        QString d=QString::number(id);
        QString batch=supplier+"_"+invoice+"_"+d;
        QSqlQuery querysale;

        querysale.prepare("INSERT INTO stock_transaction(id,code,stock,mfd,supplier,invoice,cost,date_time) VALUES(:id,:code,:stock,:mfd,:supplier,:invoice,:cost,:date_time)");

        querysale.bindValue(":id", id);
        querysale.bindValue(":code",coder);
        querysale.bindValue(":stock", qua.toInt());
        querysale.bindValue(":mfd",date);
        querysale.bindValue(":supplier", supplier);
        querysale.bindValue(":invoice", invoice);
        querysale.bindValue(":cost", rate*1.00);
        querysale.bindValue(":date_time", datetime);



        if(!querysale.exec())
        {
            qDebug() << "error recording sale";
        }

        qDebug() << "sale inserted";

        QSqlQuery queryinv;

        queryinv.prepare("INSERT INTO inventory(code,batch,quantity) VALUES(:code,:batch,:qty)");

        queryinv.bindValue(":code", coder);
        queryinv.bindValue(":batch",batch);
        queryinv.bindValue(":qty", qua.toInt());



        if(!queryinv.exec())
        {
            qDebug() << "error recording inventory "<<queryinv.lastError()<<queryinv.executedQuery();
        }


        qDebug() << "inventory inserted";

        QSqlQuery queryprosale;

        queryprosale.prepare("UPDATE product SET cur_stock = IFNULL(cur_stock,0) + :qty WHERE code = :code");

        queryprosale.bindValue(":code", coder);
        queryprosale.bindValue(":qty", qua.toInt());



        if(!queryprosale.exec())
        {
            qDebug() << "error updating stock on product"<<queryprosale.lastError()<<queryprosale.executedQuery();
        }
        qDebug() << "updated stock inserted";

    }
    emit this->purchase_added();
    close();
}
