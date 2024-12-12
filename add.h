#ifndef ADD_H
#define ADD_H
#include "ui_adddialog.h"
#include <QDialog>
#include <QObject>
//#include "dbmanager.h"

class add : public QDialog, public Ui::Dialog
{
    Q_OBJECT

public:
    add( QWidget * parent = 0);
private slots:
    void on_buttonBox_accepted();
    void checkLineEdits(QString);
    void on_buttonBox_rejected();
signals:
    void stock_added();
};


#endif // ADD_H
