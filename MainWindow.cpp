#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background: rgb(46, 47, 48)");
}

MainWindow::~MainWindow()
{
    delete ui;
}

