#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "customtablemodel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    CustomTableModel * model = new CustomTableModel(this);

    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

