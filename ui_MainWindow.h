/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *WidthLabel;
    QLabel *MarginLabel;
    QLabel *GutterLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(757, 600);
        QFont font;
        font.setBold(true);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        WidthLabel = new QLabel(centralwidget);
        WidthLabel->setObjectName(QString::fromUtf8("WidthLabel"));
        WidthLabel->setGeometry(QRect(0, 25, 61, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        WidthLabel->setFont(font1);
        MarginLabel = new QLabel(centralwidget);
        MarginLabel->setObjectName(QString::fromUtf8("MarginLabel"));
        MarginLabel->setGeometry(QRect(0, 70, 71, 31));
        MarginLabel->setFont(font1);
        GutterLabel = new QLabel(centralwidget);
        GutterLabel->setObjectName(QString::fromUtf8("GutterLabel"));
        GutterLabel->setGeometry(QRect(0, 120, 71, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(16);
        font2.setBold(true);
        GutterLabel->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 757, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DeCal", nullptr));
        WidthLabel->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        MarginLabel->setText(QCoreApplication::translate("MainWindow", "Margin", nullptr));
        GutterLabel->setText(QCoreApplication::translate("MainWindow", "Gutter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
