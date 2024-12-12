#include "pur_dialog.h"
#include "ui_pur_dialog.h"

pur_dialog::pur_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pur_dialog)
{
    ui->setupUi(this);
    ui->lineEdit_quan->setFocus();
    ui->buttonBox->setEnabled(false);
    connect(ui->lineEdit_quan, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits(QString)));
    connect(ui->dateEdit, SIGNAL(), this, SLOT(checkLineEdits(QString)));
    connect(ui->lineEdit_3, SIGNAL(textChanged(QString)), this, SLOT(checkLineEdits(QString)));
}

pur_dialog::~pur_dialog()
{
    delete ui;
}

void pur_dialog::on_buttonBox_accepted()
{
    emit purdetails(ui->lineEdit_quan->text()+":"+ui->dateEdit->text()+":"+ui->lineEdit_3->text());


    ui->lineEdit_quan->clear();

}
void pur_dialog::checkLineEdits(QString)
{
    bool ok = !ui->lineEdit_quan->text().isEmpty()
              && !ui->dateEdit->text().isEmpty()
              && !ui->lineEdit_3->text().isEmpty();

    ui->buttonBox->setEnabled(ok);
}
