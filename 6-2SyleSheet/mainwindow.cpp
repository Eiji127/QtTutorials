#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "customdialog.h"

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


void MainWindow::on_pushButton_clicked()
{
    CustomDialog * dialog = new CustomDialog(this);

    // Set style sheet on a container widget
//    dialog->setStyleSheet("QPushButton{background-color: yellow; color: blue;}");

    dialog->exec();
}

