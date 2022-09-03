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
    QPushButton *calculateButton;
    QCheckBox *gutterInvariableCheckBox;
    QCheckBox *gutterPreferredCheckBox;
    QCheckBox *columnInvariableCheckBox;
    QCheckBox *columnPreferredCheckBox;
    QLineEdit *widthLineEdit;
    QLineEdit *marginLineEdit;
    QLineEdit *gutterSizeLineEdit;
    QLineEdit *columnsLineEdit;
    QTableWidget *tableWidget;
    QPushButton *calculateDefaultsButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1021, 725);
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
        calculateButton = new QPushButton(centralwidget);
        calculateButton->setObjectName(QString::fromUtf8("calculateButton"));
        calculateButton->setEnabled(true);
        calculateButton->setGeometry(QRect(0, 210, 251, 41));
        calculateButton->setMinimumSize(QSize(20, 20));
        calculateButton->setFont(font1);
        gutterInvariableCheckBox = new QCheckBox(centralwidget);
        gutterInvariableCheckBox->setObjectName(QString::fromUtf8("gutterInvariableCheckBox"));
        gutterInvariableCheckBox->setGeometry(QRect(260, 110, 81, 21));
        gutterInvariableCheckBox->setChecked(true);
        gutterPreferredCheckBox = new QCheckBox(centralwidget);
        gutterPreferredCheckBox->setObjectName(QString::fromUtf8("gutterPreferredCheckBox"));
        gutterPreferredCheckBox->setGeometry(QRect(360, 110, 81, 21));
        gutterPreferredCheckBox->setChecked(false);
        columnInvariableCheckBox = new QCheckBox(centralwidget);
        columnInvariableCheckBox->setObjectName(QString::fromUtf8("columnInvariableCheckBox"));
        columnInvariableCheckBox->setGeometry(QRect(260, 150, 81, 21));
        columnInvariableCheckBox->setChecked(true);
        columnPreferredCheckBox = new QCheckBox(centralwidget);
        columnPreferredCheckBox->setObjectName(QString::fromUtf8("columnPreferredCheckBox"));
        columnPreferredCheckBox->setGeometry(QRect(360, 150, 81, 21));
        widthLineEdit = new QLineEdit(centralwidget);
        widthLineEdit->setObjectName(QString::fromUtf8("widthLineEdit"));
        widthLineEdit->setGeometry(QRect(130, 30, 121, 22));
        marginLineEdit = new QLineEdit(centralwidget);
        marginLineEdit->setObjectName(QString::fromUtf8("marginLineEdit"));
        marginLineEdit->setGeometry(QRect(130, 70, 121, 22));
        gutterSizeLineEdit = new QLineEdit(centralwidget);
        gutterSizeLineEdit->setObjectName(QString::fromUtf8("gutterSizeLineEdit"));
        gutterSizeLineEdit->setGeometry(QRect(130, 110, 121, 22));
        columnsLineEdit = new QLineEdit(centralwidget);
        columnsLineEdit->setObjectName(QString::fromUtf8("columnsLineEdit"));
        columnsLineEdit->setGeometry(QRect(130, 150, 121, 22));
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
        tableWidget->setGeometry(QRect(0, 310, 471, 291));
        tableWidget->setShowGrid(true);
        tableWidget->setSortingEnabled(true);
        tableWidget->setColumnCount(4);
        calculateDefaultsButton = new QPushButton(centralwidget);
        calculateDefaultsButton->setObjectName(QString::fromUtf8("calculateDefaultsButton"));
        calculateDefaultsButton->setEnabled(true);
        calculateDefaultsButton->setGeometry(QRect(250, 210, 251, 41));
        calculateDefaultsButton->setMinimumSize(QSize(20, 20));
        calculateDefaultsButton->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1021, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        calculateButton->setDefault(false);
        calculateDefaultsButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DeCal", nullptr));
        widthLabel->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        marginLabel->setText(QCoreApplication::translate("MainWindow", "Margin", nullptr));
        gutterSizeLabel->setText(QCoreApplication::translate("MainWindow", "Gutter Size", nullptr));
        columnsLabel->setText(QCoreApplication::translate("MainWindow", "Columns", nullptr));
        calculateButton->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        gutterInvariableCheckBox->setText(QCoreApplication::translate("MainWindow", "Invariable", nullptr));
        gutterPreferredCheckBox->setText(QCoreApplication::translate("MainWindow", "Preferred", nullptr));
        columnInvariableCheckBox->setText(QCoreApplication::translate("MainWindow", "Invariable", nullptr));
        columnPreferredCheckBox->setText(QCoreApplication::translate("MainWindow", "Preferred", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Columns", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Gutter Size", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Margin", nullptr));
        calculateDefaultsButton->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
