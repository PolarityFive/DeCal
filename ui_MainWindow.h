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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *widthLabel;
    QLabel *marginLabel;
    QLabel *gutterLabel;
    QLabel *gutterSizeLabel;
    QLabel *columnsLabel;
    QTextEdit *widthText;
    QTextEdit *marginText;
    QTextEdit *gutterText;
    QTextEdit *gutterSizeText;
    QPushButton *pushButton;
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
        widthLabel = new QLabel(centralwidget);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));
        widthLabel->setGeometry(QRect(0, 25, 61, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        widthLabel->setFont(font1);
        marginLabel = new QLabel(centralwidget);
        marginLabel->setObjectName(QString::fromUtf8("marginLabel"));
        marginLabel->setGeometry(QRect(0, 70, 71, 21));
        marginLabel->setFont(font1);
        gutterLabel = new QLabel(centralwidget);
        gutterLabel->setObjectName(QString::fromUtf8("gutterLabel"));
        gutterLabel->setGeometry(QRect(0, 110, 71, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(16);
        font2.setBold(true);
        gutterLabel->setFont(font2);
        gutterSizeLabel = new QLabel(centralwidget);
        gutterSizeLabel->setObjectName(QString::fromUtf8("gutterSizeLabel"));
        gutterSizeLabel->setGeometry(QRect(0, 150, 121, 21));
        gutterSizeLabel->setFont(font1);
        columnsLabel = new QLabel(centralwidget);
        columnsLabel->setObjectName(QString::fromUtf8("columnsLabel"));
        columnsLabel->setGeometry(QRect(0, 190, 111, 21));
        columnsLabel->setFont(font1);
        widthText = new QTextEdit(centralwidget);
        widthText->setObjectName(QString::fromUtf8("widthText"));
        widthText->setGeometry(QRect(130, 30, 121, 21));
        marginText = new QTextEdit(centralwidget);
        marginText->setObjectName(QString::fromUtf8("marginText"));
        marginText->setGeometry(QRect(130, 70, 121, 21));
        gutterText = new QTextEdit(centralwidget);
        gutterText->setObjectName(QString::fromUtf8("gutterText"));
        gutterText->setGeometry(QRect(130, 110, 121, 21));
        gutterSizeText = new QTextEdit(centralwidget);
        gutterSizeText->setObjectName(QString::fromUtf8("gutterSizeText"));
        gutterSizeText->setGeometry(QRect(130, 150, 121, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(0, 230, 251, 41));
        pushButton->setMinimumSize(QSize(20, 20));
        pushButton->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 757, 21));
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
        widthLabel->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        marginLabel->setText(QCoreApplication::translate("MainWindow", "Margin", nullptr));
        gutterLabel->setText(QCoreApplication::translate("MainWindow", "Gutter", nullptr));
        gutterSizeLabel->setText(QCoreApplication::translate("MainWindow", "Gutter Size", nullptr));
        columnsLabel->setText(QCoreApplication::translate("MainWindow", "Columns", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
