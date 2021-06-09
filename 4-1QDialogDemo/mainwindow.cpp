#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "infodialog.h"

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

    // Show the dialog model
    //    int ret = dialog->exec();


    //    if (ret == QDialog::Accepted) {
    //        QString position = dialog->getPosition();
    //        QString os = dialog->getFavoriteOs();

    //        qDebug() << "Dialog accepted, position is : " << position << "favorite os is : " << os;
    //        ui->infoLabel->setText("Your position is : " + position + " and your favorite os is : " + os);
    //    }
    //    if (ret == QDialog::Rejected) {
    //        qDebug() << "Dialog rejected";
    //    }

    // Show the dialog non model
    connect(dialog, &InfoDialog::accepted, [=]() {
        QString position = dialog->getPosition();
        QString os = dialog->getFavoriteOs();

        qDebug() << "Dialog accepted, position is : " << position << "favorite os is : " << os;
        ui->infoLabel->setText("Your position is : " + position + " and your favorite os is : " + os);

    });

    connect(dialog, &InfoDialog::rejected, [=]() {
        qDebug() << "Dialog rejected";
    });

    dialog->show();
    dialog->raise();
    dialog->activateWindow();
}

