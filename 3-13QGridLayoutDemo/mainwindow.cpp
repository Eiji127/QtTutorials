#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget * widget = new QWidget;

    QGridLayout * layout = new QGridLayout();

    // First row
    layout->addWidget(ui->button1, 0, 0);
    layout->addWidget(ui->button2, 0, 1);
    layout->addWidget(ui->button3, 0, 2, 2, 1);

    // Second row
    layout->addWidget(ui->button4, 1, 0);
    layout->addWidget(ui->button5, 1, 1);
//    layout->addWidget(ui->button6, 1, 2);

    // Third row
    layout->addWidget(ui->button7, 2, 0, 1, 2);
//    layout->addWidget(ui->button8, 2, 1);
    layout->addWidget(ui->button9, 2, 2);

    widget->setLayout(layout);
    setCentralWidget(widget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

