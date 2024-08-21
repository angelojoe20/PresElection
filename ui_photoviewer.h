/********************************************************************************
** Form generated from reading UI file 'photoviewer.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHOTOVIEWER_H
#define UI_PHOTOVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_PhotoViewer
{
public:
    QLabel *label01;
    QLineEdit *lineEdit_Fir;
    QLineEdit *lineEdit_Sur;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *PhotoViewer)
    {
        if (PhotoViewer->objectName().isEmpty())
            PhotoViewer->setObjectName("PhotoViewer");
        PhotoViewer->resize(400, 294);
        PhotoViewer->setMaximumSize(QSize(400, 300));
        PhotoViewer->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label01 = new QLabel(PhotoViewer);
        label01->setObjectName("label01");
        label01->setGeometry(QRect(60, 10, 271, 191));
        label01->setMaximumSize(QSize(400, 300));
        label01->setStyleSheet(QString::fromUtf8("background-color: rgb(255,248,220);"));
        label01->setScaledContents(true);
        lineEdit_Fir = new QLineEdit(PhotoViewer);
        lineEdit_Fir->setObjectName("lineEdit_Fir");
        lineEdit_Fir->setGeometry(QRect(20, 250, 161, 31));
        lineEdit_Fir->setStyleSheet(QString::fromUtf8("background-color: rgb(255,248,220);"));
        lineEdit_Sur = new QLineEdit(PhotoViewer);
        lineEdit_Sur->setObjectName("lineEdit_Sur");
        lineEdit_Sur->setGeometry(QRect(190, 250, 161, 31));
        lineEdit_Sur->setStyleSheet(QString::fromUtf8("background-color: rgb(255,248,220);"));
        label = new QLabel(PhotoViewer);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 230, 71, 16));
        label_2 = new QLabel(PhotoViewer);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 230, 101, 16));

        retranslateUi(PhotoViewer);

        QMetaObject::connectSlotsByName(PhotoViewer);
    } // setupUi

    void retranslateUi(QDialog *PhotoViewer)
    {
        PhotoViewer->setWindowTitle(QCoreApplication::translate("PhotoViewer", "Dialog", nullptr));
        label01->setText(QString());
        label->setText(QCoreApplication::translate("PhotoViewer", "FIRST NAME", nullptr));
        label_2->setText(QCoreApplication::translate("PhotoViewer", "SURNAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhotoViewer: public Ui_PhotoViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHOTOVIEWER_H
