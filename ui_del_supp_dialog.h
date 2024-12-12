/********************************************************************************
** Form generated from reading UI file 'del_supp_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEL_SUPP_DIALOG_H
#define UI_DEL_SUPP_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Del_supp_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *Del_supp_Dialog)
    {
        if (Del_supp_Dialog->objectName().isEmpty())
            Del_supp_Dialog->setObjectName(QStringLiteral("Del_supp_Dialog"));
        Del_supp_Dialog->resize(367, 192);
        buttonBox = new QDialogButtonBox(Del_supp_Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 110, 261, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Del_supp_Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 60, 261, 16));

        retranslateUi(Del_supp_Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Del_supp_Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Del_supp_Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Del_supp_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Del_supp_Dialog)
    {
        Del_supp_Dialog->setWindowTitle(QApplication::translate("Del_supp_Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Del_supp_Dialog", "Are you sure you want to delete selected supplier?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Del_supp_Dialog: public Ui_Del_supp_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_SUPP_DIALOG_H
