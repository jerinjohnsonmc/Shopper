/********************************************************************************
** Form generated from reading UI file 'add_supplier.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_SUPPLIER_H
#define UI_ADD_SUPPLIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Add_supplier
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLineEdit *lineEdit_suppname;
    QLineEdit *lineEdit_suppnum;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_suppadd;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Add_supplier)
    {
        if (Add_supplier->objectName().isEmpty())
            Add_supplier->setObjectName(QStringLiteral("Add_supplier"));
        Add_supplier->resize(400, 300);
        verticalLayout = new QVBoxLayout(Add_supplier);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        lineEdit_suppname = new QLineEdit(Add_supplier);
        lineEdit_suppname->setObjectName(QStringLiteral("lineEdit_suppname"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lineEdit_suppname);

        lineEdit_suppnum = new QLineEdit(Add_supplier);
        lineEdit_suppnum->setObjectName(QStringLiteral("lineEdit_suppnum"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lineEdit_suppnum);

        label = new QLabel(Add_supplier);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        label_2 = new QLabel(Add_supplier);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_2);

        lineEdit_suppadd = new QLineEdit(Add_supplier);
        lineEdit_suppadd->setObjectName(QStringLiteral("lineEdit_suppadd"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lineEdit_suppadd);

        label_3 = new QLabel(Add_supplier);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, label_3);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(Add_supplier);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Add_supplier);
        QObject::connect(buttonBox, SIGNAL(accepted()), Add_supplier, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Add_supplier, SLOT(reject()));

        QMetaObject::connectSlotsByName(Add_supplier);
    } // setupUi

    void retranslateUi(QDialog *Add_supplier)
    {
        Add_supplier->setWindowTitle(QApplication::translate("Add_supplier", "Dialog", nullptr));
        label->setText(QApplication::translate("Add_supplier", "name", nullptr));
        label_2->setText(QApplication::translate("Add_supplier", "phone nmber", nullptr));
        label_3->setText(QApplication::translate("Add_supplier", "address", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_supplier: public Ui_Add_supplier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_SUPPLIER_H
