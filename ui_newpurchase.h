/********************************************************************************
** Form generated from reading UI file 'newpurchase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPURCHASE_H
#define UI_NEWPURCHASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_newpurchase
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_sale;
    QLabel *label_5;
    QLineEdit *lineEdit_des;
    QLineEdit *lineEdit_sup;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_inv;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *newpurchase)
    {
        if (newpurchase->objectName().isEmpty())
            newpurchase->setObjectName(QStringLiteral("newpurchase"));
        newpurchase->resize(709, 504);
        verticalLayout = new QVBoxLayout(newpurchase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_4 = new QLabel(newpurchase);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_sale = new QLineEdit(newpurchase);
        lineEdit_sale->setObjectName(QStringLiteral("lineEdit_sale"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_sale);

        label_5 = new QLabel(newpurchase);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_des = new QLineEdit(newpurchase);
        lineEdit_des->setObjectName(QStringLiteral("lineEdit_des"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_des);

        lineEdit_sup = new QLineEdit(newpurchase);
        lineEdit_sup->setObjectName(QStringLiteral("lineEdit_sup"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_sup);

        label_6 = new QLabel(newpurchase);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(newpurchase);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        lineEdit_inv = new QLineEdit(newpurchase);
        lineEdit_inv->setObjectName(QStringLiteral("lineEdit_inv"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_inv);


        verticalLayout->addLayout(formLayout);

        tableWidget = new QTableWidget(newpurchase);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setColumnCount(6);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_2 = new QPushButton(newpurchase);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setAutoDefault(false);

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(newpurchase);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(newpurchase);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(newpurchase);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(true);
        label_2->setMaximumSize(QSize(0, 0));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(newpurchase);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(newpurchase);

        QMetaObject::connectSlotsByName(newpurchase);
    } // setupUi

    void retranslateUi(QDialog *newpurchase)
    {
        newpurchase->setWindowTitle(QApplication::translate("newpurchase", "Dialog", nullptr));
        label_4->setText(QApplication::translate("newpurchase", "code", nullptr));
        label_5->setText(QApplication::translate("newpurchase", "description", nullptr));
        label_6->setText(QApplication::translate("newpurchase", "supplier", nullptr));
        label_7->setText(QApplication::translate("newpurchase", "invoice", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("newpurchase", "item", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("newpurchase", "rate", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("newpurchase", "quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("newpurchase", "subtotal", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("newpurchase", "code", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("newpurchase", "mfd", nullptr));
        pushButton_2->setText(QApplication::translate("newpurchase", "save", nullptr));
        pushButton->setText(QApplication::translate("newpurchase", "delete", nullptr));
        label->setText(QApplication::translate("newpurchase", "Total", nullptr));
        label_2->setText(QApplication::translate("newpurchase", "0", nullptr));
        label_3->setText(QApplication::translate("newpurchase", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newpurchase: public Ui_newpurchase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPURCHASE_H
