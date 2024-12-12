#ifndef ADD_SUPPLIER_H
#define ADD_SUPPLIER_H

#include <QDialog>

namespace Ui
{
class Add_supplier;
}

class Add_supplier : public QDialog
{
    Q_OBJECT

public:
    explicit Add_supplier(QWidget *parent = nullptr);
    ~Add_supplier();

private slots:
    void on_buttonBox_accepted();
    void checkLineEdits(QString);
signals:
    void supp_added();
private:
    Ui::Add_supplier *ui;
};
#endif // ADD_SUPPLIER_H
