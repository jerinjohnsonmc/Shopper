#ifndef NEWSALE_H
#define NEWSALE_H
#include "quan_dialog.h"
#include <QDialog>
#include <QCompleter>
#include "errdialog.h"



namespace Ui
{
class newsale;
}

class newsale : public QDialog
{
    Q_OBJECT

public:
    explicit newsale(QWidget *parent = nullptr);
    ~newsale();
    QString cur_batch;


private slots:

    void on_lineEdit_sale_returnPressed();
    void saveDataIntoTable(QString item,double price,int quantity,QString code);
    void clear(QString item);
    void descr(int q);
    void code(int q);
    void on_pushButton_clicked();
    void on_lineEdit_des_returnPressed();







    void on_pushButton_2_clicked();

signals:
    void sale_added();

private:
    Ui::newsale *ui;
};

#endif // NEWSALE_H
