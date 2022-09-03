#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "qlineedit.h"
#include "CalculationController.h"
#include <vector>
#include <qstring.h>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background: rgb(46, 47, 48)");
    connect(ui->calculateButton, &QPushButton::clicked, this, &MainWindow::handleButtonClick);
    connect(ui->calculateDefaultsButton, &QPushButton::clicked, this, &MainWindow::handleDefaultsButtonClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleButtonClick()
{
    vector<ResultValues> resultList;

    Width width;
    Margin margin;
    Gutter gutter;
    Columns columns;
    CalculationController calculationController;

    getDataFromUi(width, margin, gutter, columns);
    //this->setStyleSheet("background: rgb(255, 255, 255)");
    resultList = calculationController.handleCalculation(width, margin, gutter, columns);
    displayCalculationResults(resultList);
}

void MainWindow::handleDefaultsButtonClick()
{
    vector<ResultValues> resultList;

    Width width;
    Margin margin;
    Gutter gutter;
    Columns columns;
    CalculationController calculationController;

    getDataFromUi(width, margin);
    resultList = calculationController.handleDefaultCalculation(width, margin, gutter, columns);
    displayCalculationResults(resultList);
}

void MainWindow::getDataFromUi(Width& width, Margin& margin, Gutter& gutter, Columns& columns)
{
    gutter.setSize(ui->gutterSizeLineEdit->text().toUInt());
    gutter.setInvariable(ui->gutterInvariableCheckBox->isChecked());
    gutter.setPreferred(ui->gutterPreferredCheckBox->isChecked());

    width.setWidth(ui->widthLineEdit->text().toUInt());

    margin.setMargin(ui->marginLineEdit->text().toUInt());

    columns.setInvariable(ui->columnInvariableCheckBox->isChecked());
    columns.setPreferred(ui->columnPreferredCheckBox->isChecked());
    columns.setColumns(ui->columnsLineEdit->text().toUInt());
}

void MainWindow::getDataFromUi(Width& width, Margin& margin)
{
    width.setWidth(ui->widthLineEdit->text().toUInt());
    margin.setMargin(ui->marginLineEdit->text().toUInt());
}

void MainWindow::displayCalculationResults(std::vector<ResultValues>& resultList)
{
    for (int i = 0; i < resultList.size(); i++)
    {
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());

        for (int j = 0; j < 4; j++)
        {
            if (j == 0)
                ui->tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(resultList[i].getColumns())));
            else if (j == 1)
                ui->tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(resultList[i].getGutterSize())));
            else if (j == 2)
                ui->tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(resultList[i].getWidth())));
            else if (j == 3)
                ui->tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(resultList[i].getMargin())));
        }
    }
}
