#ifndef DEL_DIALOG_H
#define DEL_DIALOG_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui
{
class Del_Dialog;
}

class Del_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Del_Dialog(QWidget *parent = nullptr);
    ~Del_Dialog();

private slots:
    void on_buttonBox_accepted();


private:
    Ui::Del_Dialog *ui;
signals:
    void delete_confirmation();
};

#endif // DEL_DIALOG_H
