#ifndef ERRDIALOG_H
#define ERRDIALOG_H

#include <QDialog>

namespace Ui
{
class Errdialog;
}

class Errdialog : public QDialog
{
    Q_OBJECT

public:
    explicit Errdialog(const QString &err,QWidget *parent = nullptr);
    ~Errdialog();

private:
    Ui::Errdialog *ui;
    QString myerr;

};

#endif // ERRDIALOG_H
