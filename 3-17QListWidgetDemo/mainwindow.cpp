#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addItemButton_clicked()
{
    ui->listWidget->addItem("MyItem");
}


void MainWindow::on_DeleteItemButton_clicked()
{
    // Delete item : use takeItem
    ui->listWidget->takeItem(ui->listWidget->currentRow());
}


void MainWindow::on_selectedItemsButton_clicked()
{
    // Get the list of selected items
    QList<QListWidgetItem *> list =  ui->listWidget->selectedItems();

    for (int i = 0; i < list.count(); i++) {
        qDebug() << "Selected item : " << list.at(i)->text() << " , row number id : " << ui->listWidget->row(list.at(i));
    }
}

