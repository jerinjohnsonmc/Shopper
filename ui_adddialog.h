/********************************************************************************
** Form generated from reading UI file 'adddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLineEdit *lineEdit_code;
    QLabel *label;
    QLineEdit *lineEdit_item;
    QLabel *label_2;
    QLineEdit *lineEdit_minstock;
    QLabel *label_4;
    QLineEdit *lineEdit_price;
    QLabel *label_5;
    QLineEdit *lineEdit_expiry;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(273, 259);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        lineEdit_code = new QLineEdit(Dialog);
        lineEdit_code->setObjectName(QStringLiteral("lineEdit_code"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lineEdit_code);

        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        lineEdit_item = new QLineEdit(Dialog);
        lineEdit_item->setObjectName(QStringLiteral("lineEdit_item"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lineEdit_item);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_2);

        lineEdit_minstock = new QLineEdit(Dialog);
        lineEdit_minstock->setObjectName(QStringLiteral("lineEdit_minstock"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lineEdit_minstock);

        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::FieldRole, label_4);

        lineEdit_price = new QLineEdit(Dialog);
        lineEdit_price->setObjectName(QStringLiteral("lineEdit_price"));

        formLayout->setWidget(3, QFormLayout::LabelRole, lineEdit_price);

        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(3, QFormLayout::FieldRole, label_5);

        lineEdit_expiry = new QLineEdit(Dialog);
        lineEdit_expiry->setObjectName(QStringLiteral("lineEdit_expiry"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lineEdit_expiry);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(4, QFormLayout::FieldRole, label_3);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "code", nullptr));
        label_2->setText(QApplication::translate("Dialog", "item", nullptr));
        label_4->setText(QApplication::translate("Dialog", "minimum stock", nullptr));
        label_5->setText(QApplication::translate("Dialog", "mrp", nullptr));
        label_3->setText(QApplication::translate("Dialog", "expiry in months", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
