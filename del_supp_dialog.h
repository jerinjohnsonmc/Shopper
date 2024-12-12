#ifndef DEL_SUPP_DIALOG_H
#define DEL_SUPP_DIALOG_H

#include <QDialog>

namespace Ui
{
class Del_supp_Dialog;
}

class Del_supp_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Del_supp_Dialog(const QString &name,QWidget *parent = nullptr);
    ~Del_supp_Dialog();

private slots:
    void on_buttonBox_accepted();
private:
    Ui::Del_supp_Dialog *ui;
    QString suppname;
signals:
    void delete_confirmation();
};

#endif // DEL_SUPP_DIALOG_H
