#ifndef EDITSUPP_DIALOG_H
#define EDITSUPP_DIALOG_H

#include <QDialog>

namespace Ui
{
class Editsupp_Dialog;
}

class Editsupp_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Editsupp_Dialog(const QString &name,QWidget *parent = nullptr);
    ~Editsupp_Dialog();

private slots:
    void on_buttonBox_accepted();
    void checkLineEdits(QString);
signals:
    void supp_edited();

private:
    Ui::Editsupp_Dialog *ui;
    QString suppname;
};

#endif // EDITSUPP_DIALOG_H
