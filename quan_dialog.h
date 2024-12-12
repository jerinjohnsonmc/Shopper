#ifndef QUAN_DIALOG_H
#define QUAN_DIALOG_H
#include "ui_quan_dialog.h"


#include <QDialog>

namespace Ui
{
class Quan_Dialog;
}

class Quan_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Quan_Dialog(const int &qty,QWidget *parent = nullptr);
    ~Quan_Dialog();




private slots:
    void on_buttonBox_accepted();

private:
    Ui::Quan_Dialog *ui;
signals:
    void quantity(int q);
};

#endif // QUAN_DIALOG_H
