/********************************************************************************
** Form generated from reading UI file 'edit_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_DIALOG_H
#define UI_EDIT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Edit_Dialog
{
public:
    QDialogButtonBox *buttonBox_edit;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *lineEdit_editcode;
    QLineEdit *lineEdit_edititem;
    QLineEdit *lineEdit_editminstock;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_editmrp;
    QLabel *label_5;
    QLineEdit *lineEdit_editexpiry;
    QLabel *label_4;

    void setupUi(QDialog *Edit_Dialog)
    {
        if (Edit_Dialog->objectName().isEmpty())
            Edit_Dialog->setObjectName(QStringLiteral("Edit_Dialog"));
        Edit_Dialog->resize(315, 350);
        buttonBox_edit = new QDialogButtonBox(Edit_Dialog);
        buttonBox_edit->setObjectName(QStringLiteral("buttonBox_edit"));
        buttonBox_edit->setGeometry(QRect(50, 270, 241, 32));
        buttonBox_edit->setOrientation(Qt::Horizontal);
        buttonBox_edit->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(Edit_Dialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 30, 251, 231));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_editcode = new QLineEdit(formLayoutWidget);
        lineEdit_editcode->setObjectName(QStringLiteral("lineEdit_editcode"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lineEdit_editcode);

        lineEdit_edititem = new QLineEdit(formLayoutWidget);
        lineEdit_edititem->setObjectName(QStringLiteral("lineEdit_edititem"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lineEdit_edititem);

        lineEdit_editminstock = new QLineEdit(formLayoutWidget);
        lineEdit_editminstock->setObjectName(QStringLiteral("lineEdit_editminstock"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lineEdit_editminstock);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, label_3);

        lineEdit_editmrp = new QLineEdit(formLayoutWidget);
        lineEdit_editmrp->setObjectName(QStringLiteral("lineEdit_editmrp"));

        formLayout->setWidget(3, QFormLayout::LabelRole, lineEdit_editmrp);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(3, QFormLayout::FieldRole, label_5);

        lineEdit_editexpiry = new QLineEdit(formLayoutWidget);
        lineEdit_editexpiry->setObjectName(QStringLiteral("lineEdit_editexpiry"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lineEdit_editexpiry);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::FieldRole, label_4);


        retranslateUi(Edit_Dialog);
        QObject::connect(buttonBox_edit, SIGNAL(accepted()), Edit_Dialog, SLOT(accept()));
        QObject::connect(buttonBox_edit, SIGNAL(rejected()), Edit_Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Edit_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Edit_Dialog)
    {
        Edit_Dialog->setWindowTitle(QApplication::translate("Edit_Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Edit_Dialog", "code", nullptr));
        label_2->setText(QApplication::translate("Edit_Dialog", "item", nullptr));
        label_3->setText(QApplication::translate("Edit_Dialog", "minimum stock", nullptr));
        label_5->setText(QApplication::translate("Edit_Dialog", "mrp", nullptr));
        label_4->setText(QApplication::translate("Edit_Dialog", "expiry in months", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit_Dialog: public Ui_Edit_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_DIALOG_H
