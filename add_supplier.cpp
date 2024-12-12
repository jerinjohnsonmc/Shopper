#include "add_supplier.h"
#include "ui_add_supplier.h"
#include "mainwindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QtDebug>
#include <QDate>
#include <QObject>

Add_supplier::Add_supplier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_supplier)
{
    ui->setupUi(this);
    ui->buttonBox->setDisabled(true);

    connect(ui->lineEdit_suppname, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits(QString)));
    connect(ui->lineEdit_suppnum, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits(QString)));
    connect(ui->lineEdit_suppadd, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits(QString)));
}
void Add_supplier::checkLineEdits(QString)
{
    bool ok = !ui->lineEdit_suppname->text().isEmpty()
              && !ui->lineEdit_suppnum->text().isEmpty()&&!ui->lineEdit_suppadd->text().isEmpty()

              ;
    ui->buttonBox->setEnabled(ok);
}

Add_supplier::~Add_supplier()
{
    delete ui;
}

void Add_supplier::on_buttonBox_accepted()
{
    QSqlQuery qry;
    qry.prepare("SELECT MAX(id) FROM supplier");
    if(!qry.exec())
    {
        qDebug() << "error getting id";
    }

    if (qry.next())
    {
        int id=qry.value(0).toInt()+1;
        QString date= QDate::currentDate().toString("yyyy-MM-dd");

        QSqlQuery queryAdd;

        queryAdd.prepare("INSERT INTO supplier(id,supplier_name,address,phone,date_added) VALUES(:id,:supplier_name,:address,:phone,:date_added)");

        queryAdd.bindValue(":id", id);
        queryAdd.bindValue(":supplier_name",ui->lineEdit_suppname->text());
        queryAdd.bindValue(":address", ui->lineEdit_suppadd->text());
        queryAdd.bindValue(":phone",ui->lineEdit_suppnum->text());
        queryAdd.bindValue(":date_added", date);

        if(!queryAdd.exec())
        {
            qDebug() << "error adding supplier";
        }
        foreach(QLineEdit* le, findChildren<QLineEdit*>())
        {
            le->clear();
            emit this->supp_added();
        }
    }
}
