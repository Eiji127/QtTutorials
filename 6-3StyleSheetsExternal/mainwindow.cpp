#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "suredialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_submitButton_clicked()
{
    SureDialog * dialog = new SureDialog(this);

    dialog->exec();
}

