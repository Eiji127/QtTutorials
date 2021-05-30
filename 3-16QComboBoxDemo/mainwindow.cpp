#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Add planets to the comboBox
    ui->comboBox->addItem("Earth");
    ui->comboBox->addItem("Venus");
    ui->comboBox->addItem("Mars");
    ui->comboBox->addItem("Pluton");
    ui->comboBox->addItem("Saturn");

    // Make the combobox editable
    ui->comboBox->setEditable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_captureValueButton_clicked()
{
    qDebug() << "The currently selected item in the combo is : " << ui->comboBox->currentText() <<
                " and the index is : " << QString::number(ui->comboBox->currentIndex());
}


void MainWindow::on_setValueButton_clicked()
{
    ui->comboBox->setCurrentIndex(3);
}


void MainWindow::on_getValuesButton_clicked()
{
    qDebug() << "The combo box currently has " << ui->comboBox->count() << " items. They are : ";
    for (int i = 0; i < ui->comboBox->count(); i++) {
        qDebug() << "Index " << QString::number(i) << " : " << ui->comboBox->itemText(i);
    }
}

