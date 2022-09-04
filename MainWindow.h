#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Gutter.h"
#include "Columns.h"
#include "Width.h"
#include "Margin.h"
#include <vector>
#include "ResultValues.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void handleCurrentValuesButtonClick();
    void handleFindSolutionButtonClick();

    void getDataFromUi(Width& width, Margin& margin, Gutter& gutter, Columns& columns);
    void getDataFromUi(Width& width, Margin& margin);

    void displayResults(std::vector<ResultValues>& resultList);
    void processResults(std::vector<ResultValues>& resultList);
    void styleText();
    

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
