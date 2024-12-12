#include "editsupp_dialog.h"
#include "ui_editsupp_dialog.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QtDebug>
#include <QDate>
#include <QObject>

Editsupp_Dialog::Editsupp_Dialog(const QString &name,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Editsupp_Dialog),suppname(name)
{
    ui->setupUi(this);

    ui->buttonBox->setDisabled(true);
    connect(ui->lineEdit_add, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits(QString)));
    connect(ui->lineEdit_phone, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits(QString)));

    ui->label_suppname->setText(suppname);

    QSqlQuery queryAdd;

    queryAdd.prepare("SELECT * FROM supplier WHERE supplier_name= '"+suppname+"'");
    if(!queryAdd.exec())
    {
        qDebug() << "error getting table supplier";
    }
    if (queryAdd.next())
    {
        QString address=queryAdd.value(2).toString();
        ui->lineEdit_add->setText(address);
        QString phone=queryAdd.value(3).toString();
        ui->lineEdit_phone->setText(phone);

    }
}
void Editsupp_Dialog::checkLineEdits(QString)
{
    bool ok = !ui->lineEdit_add->text().isEmpty()
              && !ui->lineEdit_phone->text().isEmpty();

    ui->buttonBox->setEnabled(ok);
}


Editsupp_Dialog::~Editsupp_Dialog()
{
    delete ui;
}

void Editsupp_Dialog::on_buttonBox_accepted()
{
    QString date= QDate::currentDate().toString("yyyy-MM-dd");


    QSqlQuery queryAdd;

    queryAdd.prepare("UPDATE supplier SET address=:address,phone=:phone,date_added=:date_added WHERE supplier_name = '"+suppname+"'");


    queryAdd.bindValue(":address",ui->lineEdit_add->text());

    queryAdd.bindValue(":phone",ui->lineEdit_phone->text());

    queryAdd.bindValue(":date_added", date);
    if(!queryAdd.exec())
    {
        qDebug() << "error updating table supplier";
    }


    foreach(QLineEdit* le, findChildren<QLineEdit*>())
    {
        le->clear();
        emit this->supp_edited();
        qDebug() << "editaccepted";
    }
}
