#ifndef NEWPURCHASE_H
#define NEWPURCHASE_H

#include <QDialog>
#include "quan_dialog.h"
#include <QCompleter>
#include "errdialog.h"
#include "pur_dialog.h"



namespace Ui
{
class newpurchase;
}

class newpurchase : public QDialog
{
    Q_OBJECT

public:
    explicit newpurchase(QWidget *parent = nullptr);
    ~newpurchase();

private slots:

    void on_lineEdit_sale_returnPressed();
    void saveDataIntoTable(QString item,double price,int quantity,QString code,QString date);
    void clear(QString item);
    void descr(QString q);
    void code(QString q);
    void on_pushButton_clicked();
    void on_lineEdit_des_returnPressed();





    void on_pushButton_2_clicked();
signals:
    void purchase_added();

private:
    Ui::newpurchase *ui;
};

#endif // NEWPURCHASE_H







