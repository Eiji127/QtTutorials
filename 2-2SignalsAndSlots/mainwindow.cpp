#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //1. String Notation
    connect(ui -> pushButton, SIGNAL(clicked()),
            this, SLOT(changeText()));

    //2. Functor Notation : Regular Slots
    connect(ui -> pushButton, &QPushButton::clicked, this, &MainWindow::changeText);

    //3. Functor Notation: Lambdas
    connect(ui -> pushButton, &QPushButton::clicked, [=]() {
        ui -> label -> setText("Lambda");
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeText()
{
    qDebug() << "DEBUG: user clicked button...";
    ui -> label -> setText("Hello There!");
}

