/********************************************************************************
** Form generated from reading UI file 'del_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEL_DIALOG_H
#define UI_DEL_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Del_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *Del_Dialog)
    {
        if (Del_Dialog->objectName().isEmpty())
            Del_Dialog->setObjectName(QStringLiteral("Del_Dialog"));
        Del_Dialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(Del_Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);
        label = new QLabel(Del_Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 100, 301, 21));

        retranslateUi(Del_Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Del_Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Del_Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Del_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Del_Dialog)
    {
        Del_Dialog->setWindowTitle(QApplication::translate("Del_Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Del_Dialog", "Are you sure you want to delete selected item?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Del_Dialog: public Ui_Del_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_DIALOG_H
