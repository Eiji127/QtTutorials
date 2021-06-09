#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFontDialog>
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


void MainWindow::on_chooseFontButton_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok,
                                      QFont("Helvetica [Cronyx]", 10),
                                      this
                                      );
    if (ok) {
         ui->label->setFont(font);
    } else {
        QMessageBox::information(this,
                                 "Message",
                                 "User did not choose font");
    }
}

