/********************************************************************************
** Form generated from reading UI file 'quan_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUAN_DIALOG_H
#define UI_QUAN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Quan_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *Quan_Dialog)
    {
        if (Quan_Dialog->objectName().isEmpty())
            Quan_Dialog->setObjectName(QStringLiteral("Quan_Dialog"));
        Quan_Dialog->resize(204, 100);
        buttonBox = new QDialogButtonBox(Quan_Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 40, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(Quan_Dialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 10, 151, 21));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);


        retranslateUi(Quan_Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Quan_Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Quan_Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Quan_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Quan_Dialog)
    {
        Quan_Dialog->setWindowTitle(QApplication::translate("Quan_Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Quan_Dialog", "Quantity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Quan_Dialog: public Ui_Quan_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUAN_DIALOG_H
