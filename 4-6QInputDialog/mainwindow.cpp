#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>

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
//    bool ok;
//    double d = QInputDialog::getDouble(this,
//                                       tr("QInputDialog::getDouble()"),
//                                       tr("Amount"),
//                                       37.56,
//                                       -10000,
//                                       10000,
//                                       2,
//                                       &ok
//                                       );
//    if (ok) {
//        qDebug() << "DEBUG: Your double value is " << QString::number(d);
//    }

    QStringList items;
    items << tr("Spring") << tr("Summer") << tr("Fall") << tr("Winter");

    bool ok;
    QString item = QInputDialog::getItem(this,
                                         tr("QInputDialog::getItem()"),
                                         tr("Season"),
                                         items,
                                         0,
                                         false,
                                         &ok
                                         );

    if (ok && !item.isEmpty()) {
        qDebug() << "Your chosen item is" << item;
    }
}

