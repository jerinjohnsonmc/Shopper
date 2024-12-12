/********************************************************************************
** Form generated from reading UI file 'errdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRDIALOG_H
#define UI_ERRDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Errdialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *Errdialog)
    {
        if (Errdialog->objectName().isEmpty())
            Errdialog->setObjectName(QStringLiteral("Errdialog"));
        Errdialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(Errdialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Errdialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 80, 371, 131));

        retranslateUi(Errdialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Errdialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Errdialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Errdialog);
    } // setupUi

    void retranslateUi(QDialog *Errdialog)
    {
        Errdialog->setWindowTitle(QApplication::translate("Errdialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Errdialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Errdialog: public Ui_Errdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRDIALOG_H
