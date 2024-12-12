/********************************************************************************
** Form generated from reading UI file 'pur_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUR_DIALOG_H
#define UI_PUR_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pur_dialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_quan;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *pur_dialog)
    {
        if (pur_dialog->objectName().isEmpty())
            pur_dialog->setObjectName(QStringLiteral("pur_dialog"));
        pur_dialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(pur_dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(pur_dialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(19, 19, 351, 201));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_quan = new QLineEdit(formLayoutWidget);
        lineEdit_quan->setObjectName(QStringLiteral("lineEdit_quan"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_quan);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        dateEdit = new QDateEdit(formLayoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);

        formLayout->setWidget(1, QFormLayout::FieldRole, dateEdit);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);


        retranslateUi(pur_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), pur_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pur_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pur_dialog);
    } // setupUi

    void retranslateUi(QDialog *pur_dialog)
    {
        pur_dialog->setWindowTitle(QApplication::translate("pur_dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("pur_dialog", "quantity", nullptr));
        label_4->setText(QApplication::translate("pur_dialog", "date", nullptr));
        dateEdit->setDisplayFormat(QApplication::translate("pur_dialog", "yyyy-M-dd", nullptr));
        label_3->setText(QApplication::translate("pur_dialog", "cost", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pur_dialog: public Ui_pur_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUR_DIALOG_H
