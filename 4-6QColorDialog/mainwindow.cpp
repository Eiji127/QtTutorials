#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColorDialog>
#include <QFontDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setAutoFillBackground(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_textColorButton_clicked()
{
    QPalette palette = ui->label->palette();

    QColor color = palette.color(QPalette::WindowText);

    QColor chosenColor = QColorDialog::getColor(color, this, "Choose text color");

    if (chosenColor.isValid()) {
        palette.setColor(QPalette::WindowText, chosenColor);
        ui->label->setPalette(palette);
        qDebug() << "Chosen Color is Valid...";
    } else {
        qDebug() << "Chosen Color is Invalid...";
    }
}


void MainWindow::on_backgroundColorButton_clicked()
{
    QPalette palette = ui->label->palette();

    QColor color = palette.color(QPalette::Window);

    QColor chosenColor = QColorDialog::getColor(color, this, "Choose text color");

    if (chosenColor.isValid()) {
        palette.setColor(QPalette::Window, chosenColor);
        ui->label->setPalette(palette);
        qDebug() << "Chosen Color is Valid...";
    } else {
        qDebug() << "Chosen Color is Invalid...";
    }
}


void MainWindow::on_fontButton_clicked()
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

