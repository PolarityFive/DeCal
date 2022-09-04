#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "qlineedit.h"
#include "CalculationController.h"
#include <vector>
#include <qstring.h>
#include <algorithm>
#include <unordered_set>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background: rgb(46, 47, 48)");
    styleText();
    connect(ui->calculateCurrentValuesButton, &QPushButton::clicked, this, &MainWindow::handleCurrentValuesButtonClick);
    connect(ui->findSolutionButton, &QPushButton::clicked, this, &MainWindow::handleFindSolutionButtonClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleCurrentValuesButtonClick()
{
    vector<ResultValues> resultList;

    Width width;
    Margin margin;
    Gutter gutter;
    Columns columns;
    CalculationController calculationController;

    getDataFromUi(width, margin, gutter, columns);
    if (calculationController.validateValues(width, margin, gutter, columns))
    {
        resultList = calculationController.handleCalculation(width, margin, gutter, columns);
        displayResults(resultList);
    }
    //this->setStyleSheet("background: rgb(255, 255, 255)");

}

void MainWindow::handleFindSolutionButtonClick()
{
    vector<ResultValues> resultList;

    Width width;
    Margin margin;
    Gutter gutter;
    Columns columns;
    CalculationController calculationController;

    getDataFromUi(width, margin);
    if (calculationController.validateValues(width, margin, gutter, columns)) 
    {
        resultList = calculationController.handleDefaultCalculation(width, margin, gutter, columns);
        processResults(resultList);
        displayResults(resultList);
    }
}

void MainWindow::getDataFromUi(Width& width, Margin& margin, Gutter& gutter, Columns& columns)
{
    if ((!ui->gutterSizeLineEdit->text().isEmpty()) && (!ui->gutterSizeLineEdit->text().isNull()))
        gutter.setSize(ui->gutterSizeLineEdit->text().toUInt());

    if ((!ui->widthLineEdit->text().isEmpty()) && (!ui->widthLineEdit->text().isNull()))
        width.setWidth(ui->widthLineEdit->text().toUInt());

    if ((!ui->marginLineEdit->text().isEmpty()) && (!ui->marginLineEdit->text().isNull()))
        margin.setMargin(ui->marginLineEdit->text().toUInt());

    if ((!ui->columnsLineEdit->text().isEmpty()) && (!ui->columnsLineEdit->text().isNull()))
        columns.setColumns(ui->columnsLineEdit->text().toUInt());

    gutter.setInvariable(ui->gutterInvariableCheckBox->isChecked());
    gutter.setPreferred(ui->gutterPreferredCheckBox->isChecked());
    columns.setInvariable(ui->columnInvariableCheckBox->isChecked());
    columns.setPreferred(ui->columnPreferredCheckBox->isChecked());
}

void MainWindow::getDataFromUi(Width& width, Margin& margin)
{
    width.setWidth(ui->widthLineEdit->text().toUInt());
    margin.setMargin(ui->marginLineEdit->text().toUInt());
}

void MainWindow::displayResults(std::vector<ResultValues>& resultList)
{
    for (int i = 0; i < resultList.size(); i++)
    {
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());

        for (int j = 0; j < 4; j++)
        {
            if (j == 0)
            {
                ui->tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(resultList[i].getColumns())));
                ui->tableWidget->item(i, j)->setForeground(QBrush(QColor(255, 255, 255)));
            }
            else if (j == 1)
            {
                ui->tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(resultList[i].getGutterSize())));
                ui->tableWidget->item(i, j)->setForeground(QBrush(QColor(255, 255, 255)));
            }
            else if (j == 2)
            {
                ui->tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(resultList[i].getWidth())));
                ui->tableWidget->item(i, j)->setForeground(QBrush(QColor(255, 255, 255)));
            }
            else if (j == 3)
            {
                ui->tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(resultList[i].getMargin())));
                ui->tableWidget->item(i, j)->setForeground(QBrush(QColor(255, 255, 255)));
            }
        }
    }
}

void MainWindow::processResults(std::vector<ResultValues>& resultList) //TODO Switch to a method with O(N) time
{
    for (auto i = 0; i < resultList.size(); i++)
    {
        for (auto j = i+1; j < resultList.size(); j++)
        {
            if ((resultList[i].getColumns() == resultList[j].getColumns()) && (resultList[i].getGutterSize() == resultList[j].getGutterSize())
                && (resultList[i].getMargin() == resultList[j].getMargin()) && (resultList[i].getWidth() == resultList[j].getWidth()))
            {
                resultList.erase(resultList.begin() + j);
            }
        }
    }
}

void MainWindow::styleText()
{
    ui->findSolutionButton->setStyleSheet("color: rgb(255, 255, 255)");
    ui->calculateCurrentValuesButton->setStyleSheet("color: rgb(255, 255, 255)");
    ui->columnsLabel->setStyleSheet("color: rgb(255, 255, 255)");
    ui->gutterSizeLabel->setStyleSheet("color: rgb(255, 255, 255)");
    ui->marginLabel->setStyleSheet("color: rgb(255, 255, 255)");
    ui->maxLabel->setStyleSheet("color: rgb(255, 255, 255)");
    ui->widthLabel->setStyleSheet("color: rgb(255, 255, 255)");
    ui->minLabel->setStyleSheet("color: rgb(255, 255, 255)");
    ui->columnInvariableCheckBox->setStyleSheet("color: rgb(255, 255, 255)");
    ui->gutterInvariableCheckBox->setStyleSheet("color: rgb(255, 255, 255)");
    ui->columnPreferredCheckBox->setStyleSheet("color: rgb(255, 255, 255)");
    ui->gutterPreferredCheckBox->setStyleSheet("color: rgb(255, 255, 255)");

    ui->columnsLineEdit->setStyleSheet("color: rgb(255, 255, 255)");
    ui->columnsMaxLineEdit->setStyleSheet("color: rgb(255, 255, 255)");
    ui->columnsMinLineEdit->setStyleSheet("color: rgb(255, 255, 255)");


    ui->gutterSizeLineEdit->setStyleSheet("color: rgb(255, 255, 255)");
    ui->gutterSizeMaxLineEdit->setStyleSheet("color: rgb(255, 255, 255)");
    ui->gutterSizeMinLineEdit->setStyleSheet("color: rgb(255, 255, 255)");

    ui->marginLineEdit->setStyleSheet("color: rgb(255, 255, 255)");
    ui->widthLineEdit->setStyleSheet("color: rgb(255, 255, 255)");
}

