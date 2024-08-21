/********************************************************************************
** Form generated from reading UI file 'totalfemalevotes.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOTALFEMALEVOTES_H
#define UI_TOTALFEMALEVOTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_TotalFemaleVotes
{
public:
    QLabel *label;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *TotalFemaleVotes)
    {
        if (TotalFemaleVotes->objectName().isEmpty())
            TotalFemaleVotes->setObjectName("TotalFemaleVotes");
        TotalFemaleVotes->resize(400, 200);
        TotalFemaleVotes->setMaximumSize(QSize(400, 200));
        TotalFemaleVotes->setStyleSheet(QString::fromUtf8("background-color: rgb(255,248,220);"));
        label = new QLabel(TotalFemaleVotes);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 10, 231, 41));
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Tahoma\";"));
        label->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(TotalFemaleVotes);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(80, 70, 241, 51));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Tahoma\";\n"
"background-color: rgb(255, 255, 255);"));

        retranslateUi(TotalFemaleVotes);

        QMetaObject::connectSlotsByName(TotalFemaleVotes);
    } // setupUi

    void retranslateUi(QDialog *TotalFemaleVotes)
    {
        TotalFemaleVotes->setWindowTitle(QCoreApplication::translate("TotalFemaleVotes", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TotalFemaleVotes", "TOTAL FEMALE VOTES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TotalFemaleVotes: public Ui_TotalFemaleVotes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTALFEMALEVOTES_H
