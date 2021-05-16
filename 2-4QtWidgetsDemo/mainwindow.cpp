#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //1. String Notation
//    connect(ui -> horizontalSlider, SIGNAL(valueChanged(int)),
//            ui -> progressBar, SLOT(setValue(int)));

    //2. Functor Notation : Normal Slots
//    connect(ui -> horizontalSlider, &QSlider::valueChanged,
//            ui -> progressBar, &QProgressBar::setValue);

    //3. Functor Notation : Lambdas
    connect(ui -> horizontalSlider, &QSlider::valueChanged,
            [=]() {
       ui -> progressBar -> setValue(ui -> horizontalSlider -> value());
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

