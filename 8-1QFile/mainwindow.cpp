#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
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


void MainWindow::on_writeButton_clicked()
{
    // Save the file to disk
    QString filename = QFileDialog::getSaveFileName(this, "Save As");
    if (filename.isEmpty()) {
        return;
    }

    QFile file(filename);

    // Open the file
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)) {
        return;
    }

    QTextStream out(&file);
    out << ui->textEdit->toPlainText() << "\n";

    file.close();
}


void MainWindow::on_readButton_clicked()
{
    QString fileContent;

    // Save the file to disk
    QString filename = QFileDialog::getOpenFileName(this, "Open File");
    if (filename.isEmpty()) {
        return;
    }

    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return;
    }

    QTextStream in(&file);
    QString line = in.readLine();

    while (!line.isNull()) {
        fileContent.append(line);
        line = in.readLine();
    }

    file.close();

    ui->textEdit->clear();
    ui->textEdit->setPlainText(fileContent);
}


void MainWindow::on_selectFileButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, "Choose File");
    if (filename.isEmpty()) {
        return;
    }
    ui->sourceLineEdit->setText(filename);
}


void MainWindow::on_copyButton_clicked()
{
    QString srcFileName = ui->sourceLineEdit->text();
    QString destFileName = ui->copyLineEdit->text();

    if (srcFileName.isEmpty()) {
        return;
    }

    QFile file(srcFileName);
    if (file.copy(destFileName)) {
        QMessageBox::information(this, "Success", "Copy successfull");
    } else {
        QMessageBox::information(this, "Failure", "Copy Failed");
    }
}

