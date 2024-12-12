/********************************************************************************
** Form generated from reading UI file 'editsupp_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSUPP_DIALOG_H
#define UI_EDITSUPP_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Editsupp_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *lineEdit_add;
    QLabel *label;
    QLineEdit *lineEdit_phone;
    QLabel *label_3;
    QLabel *label_suppname;

    void setupUi(QDialog *Editsupp_Dialog)
    {
        if (Editsupp_Dialog->objectName().isEmpty())
            Editsupp_Dialog->setObjectName(QStringLiteral("Editsupp_Dialog"));
        Editsupp_Dialog->resize(280, 309);
        buttonBox = new QDialogButtonBox(Editsupp_Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(0, 240, 241, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(Editsupp_Dialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 50, 221, 171));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_add = new QLineEdit(formLayoutWidget);
        lineEdit_add->setObjectName(QStringLiteral("lineEdit_add"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lineEdit_add);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        lineEdit_phone = new QLineEdit(formLayoutWidget);
        lineEdit_phone->setObjectName(QStringLiteral("lineEdit_phone"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lineEdit_phone);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_3);

        label_suppname = new QLabel(Editsupp_Dialog);
        label_suppname->setObjectName(QStringLiteral("label_suppname"));
        label_suppname->setGeometry(QRect(110, 20, 47, 16));

        retranslateUi(Editsupp_Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Editsupp_Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Editsupp_Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Editsupp_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Editsupp_Dialog)
    {
        Editsupp_Dialog->setWindowTitle(QApplication::translate("Editsupp_Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Editsupp_Dialog", "address", nullptr));
        label_3->setText(QApplication::translate("Editsupp_Dialog", "phone", nullptr));
        label_suppname->setText(QApplication::translate("Editsupp_Dialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Editsupp_Dialog: public Ui_Editsupp_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSUPP_DIALOG_H
