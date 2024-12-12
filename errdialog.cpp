#include "errdialog.h"
#include "ui_errdialog.h"

Errdialog::Errdialog(const QString &err,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Errdialog),myerr(err)
{
    ui->setupUi(this);
    ui->label->setText(err);
}

Errdialog::~Errdialog()
{
    delete ui;
}
