#ifndef PUR_DIALOG_H
#define PUR_DIALOG_H

#include <QDialog>

namespace Ui
{
class pur_dialog;
}

class pur_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit pur_dialog(QWidget *parent = nullptr);
    ~pur_dialog();





private slots:
    void on_buttonBox_accepted();
    void checkLineEdits(QString);





private:
    Ui::pur_dialog *ui;
signals:
    void purdetails(QString q);
    void enable (int q);
};

#endif // PUR_DIALOG_H
