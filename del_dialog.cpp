#include "del_dialog.h"
#include "ui_del_dialog.h"
#include <QDebug>

Del_Dialog::Del_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Del_Dialog)
{
    ui->setupUi(this);

}

Del_Dialog::~Del_Dialog()
{
    delete ui;
}

void Del_Dialog::on_buttonBox_accepted()
{
    emit delete_confirmation();

}

