#include "edit_dialog.h"
#include "ui_edit_dialog.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QtDebug>
#include <QDate>
#include <QObject>
//#include "dbmanager.h"


Edit_Dialog::Edit_Dialog(const QString &code,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit_Dialog),itemcode(code)
{
    ui->setupUi(this);
    ui->buttonBox_edit->setDisabled(true);
    connect(ui->lineEdit_editcode, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits(QString)));
    connect(ui->lineEdit_editexpiry, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits(QString)));
    connect(ui->lineEdit_edititem, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits(QString)));
    connect(ui->lineEdit_editminstock, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits(QString)));
    connect(ui->lineEdit_editmrp, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits(QString)));
    ui->lineEdit_editcode->setText(itemcode);

    QSqlQuery queryAdd;

    queryAdd.prepare("SELECT * FROM product WHERE code= '"+itemcode+"'");
    if(!queryAdd.exec())
    {
        qDebug() << "error getting table product";
    }
    if (queryAdd.next())
    {
        QString item=queryAdd.value(1).toString();
        ui->lineEdit_edititem->setText(item);
        QString expiry=queryAdd.value(6).toString();
        ui->lineEdit_editexpiry->setText(expiry);
        QString minstock=queryAdd.value(3).toString();
        ui->lineEdit_editminstock->setText(minstock);
        double price=queryAdd.value(4).toDouble();
        ui->lineEdit_editmrp->setText(QString::number(price));

    }
}
void Edit_Dialog::checkLineEdits(QString)
{
    bool ok = !ui->lineEdit_editcode->text().isEmpty()
              && !ui->lineEdit_editexpiry->text().isEmpty()
              && !ui->lineEdit_edititem->text().isEmpty()
              && !ui->lineEdit_editminstock->text().isEmpty()
              //&& !this->lineEdit_stock->text().isEmpty()
              && !ui->lineEdit_editmrp->text().isEmpty();
    ui->buttonBox_edit->setEnabled(ok);
}

Edit_Dialog::~Edit_Dialog()
{
    delete ui;
}


void Edit_Dialog::on_buttonBox_edit_accepted()
{
    QString date= QDate::currentDate().toString("yyyy-MM-dd");
    double price =ui->lineEdit_editmrp->text().toDouble()*1.00;


    QSqlQuery queryAdd;

    queryAdd.prepare("UPDATE product SET description=:description,minstock=:minstock,price=:price,date_added=:date_added,expiry=:expiry WHERE code = '"+itemcode+"'");


    queryAdd.bindValue(":description",ui->lineEdit_edititem->text());

    queryAdd.bindValue(":minstock",ui->lineEdit_editminstock->text().toInt());
    queryAdd.bindValue(":expiry", ui->lineEdit_editexpiry->text().toInt());
    queryAdd.bindValue(":price",price);
    queryAdd.bindValue(":date_added", date);
    if(!queryAdd.exec())
    {
        qDebug() << "error updating table product";
    }

    foreach(QLineEdit* le, findChildren<QLineEdit*>())
    {
        le->clear();
        emit this->stock_edited();
    }

}
