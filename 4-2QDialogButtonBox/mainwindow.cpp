#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "infodialog.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    InfoDialog * dialog = new InfoDialog(this);

    connect(dialog, &InfoDialog::accepted, [=]() {
        qDebug() << "Dialog Acceped...";
    });

    connect(dialog, &InfoDialog::rejected, [=]() {
         qDebug() << "Dialog Rejected...";
    });

    dialog->exec();
}

