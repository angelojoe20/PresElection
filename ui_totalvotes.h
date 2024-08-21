/********************************************************************************
** Form generated from reading UI file 'totalvotes.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOTALVOTES_H
#define UI_TOTALVOTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_TotalVotes
{
public:
    QLineEdit *lineEdit_1;
    QLabel *label;

    void setupUi(QDialog *TotalVotes)
    {
        if (TotalVotes->objectName().isEmpty())
            TotalVotes->setObjectName("TotalVotes");
        TotalVotes->resize(400, 200);
        TotalVotes->setMaximumSize(QSize(400, 200));
        TotalVotes->setStyleSheet(QString::fromUtf8("background-color: rgb(255,248,220);"));
        lineEdit_1 = new QLineEdit(TotalVotes);
        lineEdit_1->setObjectName("lineEdit_1");
        lineEdit_1->setGeometry(QRect(90, 70, 241, 51));
        lineEdit_1->setStyleSheet(QString::fromUtf8("font: 12pt \"Tahoma\";\n"
"background-color: rgb(255, 255, 255);"));
        label = new QLabel(TotalVotes);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 20, 231, 31));
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Tahoma\";"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(TotalVotes);

        QMetaObject::connectSlotsByName(TotalVotes);
    } // setupUi

    void retranslateUi(QDialog *TotalVotes)
    {
        TotalVotes->setWindowTitle(QCoreApplication::translate("TotalVotes", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TotalVotes", "TOTAL  VOTES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TotalVotes: public Ui_TotalVotes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTALVOTES_H
