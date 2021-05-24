#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->minionsTextLabel->move(100, 30);

    // add an image to the second label
    QPixmap minionsPixmap("://images/minions.png");

    ui->imageLabel->move(0, 70);
    ui->imageLabel->setPixmap(minionsPixmap.scaled(400, 400));
}

MainWindow::~MainWindow()
{
    delete ui;
}

