#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QFileSystemModel(this);
    parentIndex = model->setRootPath("/Users/");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int rowCount = model->rowCount(parentIndex);
    qDebug() << "Row count : " << QString::number(rowCount);

    for (int i = 0; i < rowCount; i++) {
        QModelIndex index = model->index(i, 0, parentIndex);
        QString data = model->data(index, Qt::DisplayRole).toString();
        qDebug() << "Data item [" << QString::number(i) << "]" << data;
    }
}

