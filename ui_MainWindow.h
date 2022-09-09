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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *widthLabel;
    QLabel *marginLabel;
    QLabel *gutterSizeLabel;
    QLabel *columnsLabel;
    QCheckBox *gutterInvariableCheckBox;
    QCheckBox *columnInvariableCheckBox;
    QLineEdit *widthLineEdit;
    QLineEdit *marginLineEdit;
    QLineEdit *gutterSizeLineEdit;
    QLineEdit *columnsLineEdit;
    QTableWidget *tableWidget;
    QPushButton *findSolutionButton;
    QLineEdit *gutterSizeMinLineEdit;
    QLineEdit *gutterSizeMaxLineEdit;
    QLineEdit *columnsMinLineEdit;
    QLineEdit *columnsMaxLineEdit;
    QLabel *minLabel;
    QLabel *maxLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1226, 901);
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
        gutterSizeLabel = new QLabel(centralwidget);
        gutterSizeLabel->setObjectName(QString::fromUtf8("gutterSizeLabel"));
        gutterSizeLabel->setGeometry(QRect(0, 110, 111, 20));
        gutterSizeLabel->setFont(font1);
        columnsLabel = new QLabel(centralwidget);
        columnsLabel->setObjectName(QString::fromUtf8("columnsLabel"));
        columnsLabel->setGeometry(QRect(0, 150, 101, 20));
        columnsLabel->setFont(font1);
        gutterInvariableCheckBox = new QCheckBox(centralwidget);
        gutterInvariableCheckBox->setObjectName(QString::fromUtf8("gutterInvariableCheckBox"));
        gutterInvariableCheckBox->setGeometry(QRect(290, 110, 81, 21));
        gutterInvariableCheckBox->setChecked(false);
        columnInvariableCheckBox = new QCheckBox(centralwidget);
        columnInvariableCheckBox->setObjectName(QString::fromUtf8("columnInvariableCheckBox"));
        columnInvariableCheckBox->setGeometry(QRect(290, 150, 81, 21));
        columnInvariableCheckBox->setChecked(false);
        widthLineEdit = new QLineEdit(centralwidget);
        widthLineEdit->setObjectName(QString::fromUtf8("widthLineEdit"));
        widthLineEdit->setGeometry(QRect(130, 30, 41, 22));
        marginLineEdit = new QLineEdit(centralwidget);
        marginLineEdit->setObjectName(QString::fromUtf8("marginLineEdit"));
        marginLineEdit->setGeometry(QRect(130, 70, 41, 22));
        gutterSizeLineEdit = new QLineEdit(centralwidget);
        gutterSizeLineEdit->setObjectName(QString::fromUtf8("gutterSizeLineEdit"));
        gutterSizeLineEdit->setGeometry(QRect(130, 110, 41, 22));
        columnsLineEdit = new QLineEdit(centralwidget);
        columnsLineEdit->setObjectName(QString::fromUtf8("columnsLineEdit"));
        columnsLineEdit->setGeometry(QRect(130, 150, 41, 22));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 310, 471, 551));
        tableWidget->setShowGrid(true);
        tableWidget->setSortingEnabled(true);
        tableWidget->setColumnCount(4);
        findSolutionButton = new QPushButton(centralwidget);
        findSolutionButton->setObjectName(QString::fromUtf8("findSolutionButton"));
        findSolutionButton->setEnabled(true);
        findSolutionButton->setGeometry(QRect(0, 200, 251, 41));
        findSolutionButton->setMinimumSize(QSize(20, 20));
        findSolutionButton->setFont(font1);
        gutterSizeMinLineEdit = new QLineEdit(centralwidget);
        gutterSizeMinLineEdit->setObjectName(QString::fromUtf8("gutterSizeMinLineEdit"));
        gutterSizeMinLineEdit->setGeometry(QRect(180, 110, 41, 22));
        gutterSizeMaxLineEdit = new QLineEdit(centralwidget);
        gutterSizeMaxLineEdit->setObjectName(QString::fromUtf8("gutterSizeMaxLineEdit"));
        gutterSizeMaxLineEdit->setGeometry(QRect(230, 110, 41, 22));
        columnsMinLineEdit = new QLineEdit(centralwidget);
        columnsMinLineEdit->setObjectName(QString::fromUtf8("columnsMinLineEdit"));
        columnsMinLineEdit->setGeometry(QRect(180, 150, 41, 22));
        columnsMaxLineEdit = new QLineEdit(centralwidget);
        columnsMaxLineEdit->setObjectName(QString::fromUtf8("columnsMaxLineEdit"));
        columnsMaxLineEdit->setGeometry(QRect(230, 150, 41, 22));
        minLabel = new QLabel(centralwidget);
        minLabel->setObjectName(QString::fromUtf8("minLabel"));
        minLabel->setGeometry(QRect(180, 90, 21, 16));
        maxLabel = new QLabel(centralwidget);
        maxLabel->setObjectName(QString::fromUtf8("maxLabel"));
        maxLabel->setGeometry(QRect(230, 90, 31, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1226, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        findSolutionButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DeCal", nullptr));
        widthLabel->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        marginLabel->setText(QCoreApplication::translate("MainWindow", "Margin", nullptr));
        gutterSizeLabel->setText(QCoreApplication::translate("MainWindow", "Gutter Size", nullptr));
        columnsLabel->setText(QCoreApplication::translate("MainWindow", "Columns", nullptr));
        gutterInvariableCheckBox->setText(QCoreApplication::translate("MainWindow", "Invariable", nullptr));
        columnInvariableCheckBox->setText(QCoreApplication::translate("MainWindow", "Invariable", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Columns", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Gutter Size", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Margin", nullptr));
        findSolutionButton->setText(QCoreApplication::translate("MainWindow", "Find Solution", nullptr));
        minLabel->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        maxLabel->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
