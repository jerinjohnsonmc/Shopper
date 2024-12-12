#include "add.h"
#include "ui_adddialog.h"

#include "mainwindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QtDebug>
#include <QDate>
#include <QObject>
add::add( QWidget * parent) : QDialog(parent)
{

    setupUi(this);
    this->buttonBox->setDisabled(true);



    connect(this->lineEdit_code, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits(QString)));
    connect(this->lineEdit_expiry, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits(QString)));
    connect(this->lineEdit_item, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits(QString)));
    connect(this->lineEdit_minstock, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits(QString)));
    connect(this->lineEdit_price, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits(QString)));

}
void add::checkLineEdits(QString)
{
    bool ok = !this->lineEdit_code->text().isEmpty()
              && !this->lineEdit_expiry->text().isEmpty()
              && !this->lineEdit_item->text().isEmpty()
              && !this->lineEdit_minstock->text().isEmpty()
              //&& !this->lineEdit_stock->text().isEmpty()
              && !this->lineEdit_price->text().isEmpty();
    this->buttonBox->setEnabled(ok);
}

void add::on_buttonBox_accepted()
{
    QSqlQuery query;
    query.prepare("SELECT MAX(Id) FROM product");
    if(!query.exec())
    {
        qDebug() << "error getting id";
    }
    int id=0 ;
    if (query.next())
    {
        id=query.value(0).toInt()+1;
    }
    qDebug() << id;
    QString date= QDate::currentDate().toString("yyyy-MM-dd");
    double price =this->lineEdit_price->text().toDouble()*1.00;
    //QString mrp= QString::number(price);
    QSqlQuery queryAdd;

    queryAdd.prepare("INSERT INTO product(id,description,code,minstock,price,date_added,expiry) VALUES(:id,:description,:code,:minstock,:price,:date_added,:expiry)");

    queryAdd.bindValue(":id", id);
    queryAdd.bindValue(":description",this->lineEdit_item->text());
    queryAdd.bindValue(":code", this->lineEdit_code->text());
    queryAdd.bindValue(":minstock",this->lineEdit_minstock->text().toInt());
    queryAdd.bindValue(":expiry", this->lineEdit_expiry->text().toInt());
    queryAdd.bindValue(":price", price);
    queryAdd.bindValue(":date_added", date);


    if(!queryAdd.exec())
    {
        qDebug() << "error adding product";
    }

    foreach(QLineEdit* le, findChildren<QLineEdit*>())
    {
        le->clear();
        emit this->stock_added();
    }
    this->lineEdit_code->setFocus();
}

void add::on_buttonBox_rejected()
{
    foreach(QLineEdit* le, findChildren<QLineEdit*>())
    {
        le->clear();
    }
}

