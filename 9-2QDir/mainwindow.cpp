#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>

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


void MainWindow::on_chooseDirButton_clicked()
{
    QString filename = QFileDialog::getExistingDirectory(this, "Choose Folder");
    if (filename.isEmpty()) {
        return;
    }
    ui->lineEdit->setText(filename);
}


void MainWindow::on_createDirButton_clicked()
{
    // Create a dir if it doesn't exist already
    QString dirPath = ui->lineEdit->text();
    if (dirPath.isEmpty()) {
        return;
    }

    QDir dir(dirPath);
    if (!dir.exists()) {
        // Create it!!
        if (dir.mkpath(dirPath)) {
            QMessageBox::information(this, "Message", "Directory created");
        }
    } else {
        QMessageBox::information(this, "Message", "Directory already exists");
    }
}


void MainWindow::on_dirExistsButton_clicked()
{
    // Check if a directory exists
    QString dirPath = ui->lineEdit->text();
    if (dirPath.isEmpty()) {
        return;
    }

    QDir dir(dirPath);
    if (dir.exists()) {
        QMessageBox::information(this, "Message", "Directory exists");
    } else {
        QMessageBox::information(this, "Message", "Directory dosen't exist");
    }
}


void MainWindow::on_dirOrfileButton_clicked()
{
    QFileInfo fileInfo(ui->listWidget->currentItem()->text());
    if (fileInfo.isDir()) {
        QMessageBox::information(this, "Message", "This a Dir");
    } else if (fileInfo.isFile()) {
        QMessageBox::information(this, "Message", "This a File");
    } else {
        QMessageBox::information(this, "Message", "Something else");
    }
}


void MainWindow::on_folderContentsButton_clicked()
{
    ui->listWidget->clear();

    QString dirPath = ui->lineEdit->text();
    if (dirPath.isEmpty()) {
        return;
    }

    QDir dir(dirPath);

    // Get the list of files and directories in the folder
    QList<QFileInfo> fileList = dir.entryInfoList();

    for (int i = 0; i < fileList.size(); i++) {
        QString prefix;
        if (fileList.at(i).isFile()) {
            prefix = "FILE : ";
        }
        if (fileList.at(i).isDir()) {
            prefix = "DIRECTORY : ";
        }
        ui->listWidget->addItem(
                    fileList.at(i).absoluteFilePath());
    }
}

