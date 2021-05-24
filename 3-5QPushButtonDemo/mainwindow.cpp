#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // Clicked Signal
    QFont button1Font("Times", 20 , QFont::Bold );
    QPushButton * button = new QPushButton("Button1", this);
    button->setMinimumSize(200, 100);
    button->setFont(button1Font);
    connect(button, &QPushButton::clicked, [=](){
        qDebug() << "Button clicked";
    });

    QPushButton * button2 = new QPushButton("Button2", this);
    button2->setMinimumSize(200, 100);
    button2->move(205, 0);
    button2->setFont(button1Font);
    connect(button2, &QPushButton::pressed, [=](){
        qDebug() << "Button pressed";
    });

    connect(button2, &QPushButton::released, [=](){
        qDebug() << "Button released";
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

