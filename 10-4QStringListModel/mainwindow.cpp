#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QStringListModel(this);

    QStringList list;

    list << "Cow" << "Rooster" << "Lion" << "Hyena" << "Buffalo";

    model->setStringList(list);

    ui->listView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_getDataButton_clicked()
{
    QStringList list = model->stringList();
    qDebug() << "The current data is : " << list;
}

