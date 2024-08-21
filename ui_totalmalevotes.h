/********************************************************************************
** Form generated from reading UI file 'totalmalevotes.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOTALMALEVOTES_H
#define UI_TOTALMALEVOTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_TotalMaleVotes
{
public:
    QLabel *label;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *TotalMaleVotes)
    {
        if (TotalMaleVotes->objectName().isEmpty())
            TotalMaleVotes->setObjectName("TotalMaleVotes");
        TotalMaleVotes->resize(400, 200);
        TotalMaleVotes->setMaximumSize(QSize(400, 200));
        TotalMaleVotes->setStyleSheet(QString::fromUtf8("background-color: rgb(255,248,220);"));
        label = new QLabel(TotalMaleVotes);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 20, 231, 31));
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Tahoma\";"));
        label->setAlignment(Qt::AlignCenter);
        lineEdit_3 = new QLineEdit(TotalMaleVotes);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(100, 70, 241, 51));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Tahoma\";\n"
"background-color: rgb(255, 255, 255);"));

        retranslateUi(TotalMaleVotes);

        QMetaObject::connectSlotsByName(TotalMaleVotes);
    } // setupUi

    void retranslateUi(QDialog *TotalMaleVotes)
    {
        TotalMaleVotes->setWindowTitle(QCoreApplication::translate("TotalMaleVotes", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TotalMaleVotes", "TOTAL MALE VOTES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TotalMaleVotes: public Ui_TotalMaleVotes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTALMALEVOTES_H
