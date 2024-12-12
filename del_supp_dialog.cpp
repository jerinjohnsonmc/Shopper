#include "del_supp_dialog.h"
#include "ui_del_supp_dialog.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QtDebug>
#include <QDate>
#include <QObject>
//#include "dbmanager.h"

Del_supp_Dialog::Del_supp_Dialog(const QString &name,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Del_supp_Dialog),suppname(name)
{
    ui->setupUi(this);
}

Del_supp_Dialog::~Del_supp_Dialog()
{
    delete ui;
}

void Del_supp_Dialog::on_buttonBox_accepted()
{

    QSqlQuery queryAdd;

    queryAdd.prepare("DELETE FROM supplier WHERE supplier_name = '"+suppname+"'");
    if(!queryAdd.exec())
    {
        qDebug() << "error deleting supplier";
    }
    emit delete_confirmation();

}
