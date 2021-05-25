#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    QWidget * widget = new QWidget;

//    // 1. Define the layout
//    QHBoxLayout * layout = new QHBoxLayout();

//    // 2. Add things to the layout
//    layout->addWidget(ui->oneButton);
//    layout->addWidget(ui->twoButton);
//    layout->addWidget(ui->threeButton);
//    layout->addWidget(ui->fourButton);
//    layout->addWidget(ui->fiveButton);

//    // 3. Set layout to widget
//    widget->setLayout(layout);
//    setCentralWidget(widget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

