#include "quan_dialog.h"
#include "ui_quan_dialog.h"

Quan_Dialog::Quan_Dialog(const int &qty,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Quan_Dialog)
{
    ui->setupUi(this);
    ui->lineEdit->setFocus();
    ui->lineEdit->setText("1");
    QString qua=QString::number(qty);
    ui->label->setText("quantity out of "+ qua);
}

Quan_Dialog::~Quan_Dialog()
{
    delete ui;
}


void Quan_Dialog::on_buttonBox_accepted()
{
    emit quantity(ui->lineEdit->text().toInt());
    ui->lineEdit->setText("1");


}
