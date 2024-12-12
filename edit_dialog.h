#ifndef EDIT_DIALOG_H
#define EDIT_DIALOG_H

#include <QDialog>
#include "ui_edit_dialog.h"

namespace Ui
{
class Edit_Dialog;
}

class Edit_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Edit_Dialog(const QString &code,QWidget *parent = nullptr);
    ~Edit_Dialog();
private slots:

    void checkLineEdits(QString);

    void on_buttonBox_edit_accepted();
signals:
    void stock_edited();

private:
    Ui::Edit_Dialog *ui;
    QString itemcode;
};


#endif // EDIT_DIALOG_H
