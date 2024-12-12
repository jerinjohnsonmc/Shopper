#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>

#include "add.h"
#include "newsale.h"
#include "newpurchase.h"

#include "add_supplier.h"
#include "edit_dialog.h"
#include "editsupp_dialog.h"
#include "del_dialog.h"
#include "del_supp_dialog.h"
#include <QObject>
#include <QDebug>



namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

    void update_view();

    void delete_row();
    void on_pushButton_5_clicked();
    void enable_buttons();
    void on_pushButton_4_clicked();
    void enablesupp_buttons();


    void on_pushButton_12_clicked();

    void on_pushButton_11_clicked();

private:
    Ui::MainWindow *ui;
public:
    QSqlDatabase shopdb;
    void dbsetup();


    add addstock;
    //newsale mysale;
    Add_supplier mysupp;
    Del_Dialog deletebutton;
    QString path = "shop.db";
    Edit_Dialog editdialog (QString code);
    Editsupp_Dialog editsuppdialog (QString name);
    Del_supp_Dialog delsuppdialog (QString name);
    // QSqlDatabase shopdb;


};

#endif // MAINWINDOW_H
