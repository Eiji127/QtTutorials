#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
#include <time.h>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Initialize
    srand(time(NULL));

    //Generate(1-10)
    secretNumber = rand() % 10 + 1;
    qDebug() << "Secret Number generated : " << QString::number(secretNumber);

    ui -> startOverButton -> setDisabled(true);
    ui -> messageLabel -> setText("Please guess my Number!!");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_guessButton_clicked()
{
    guessNumber = ui -> spinBox -> value();
    qDebug() << "The guess number is : " << QString::number(guessNumber);

    if (guessNumber == secretNumber) {
        //Congratulations message
        ui -> messageLabel -> setText("Congratulations, number is : " + QString::number(secretNumber));

        //Disable the guess button
        ui -> guessButton -> setDisabled(true);
        ui -> startOverButton -> setDisabled(false);
    } else if (secretNumber < guessNumber) {
        ui -> messageLabel -> setText("Number is lower than that");
    } else if (secretNumber > guessNumber) {
        ui -> messageLabel -> setText("Number is higher than that");
    }
}


void MainWindow::on_startOverButton_clicked()
{
    //Enable the Guess Button
    ui -> guessButton -> setDisabled(false);

    //Disable the Start Over Button
    ui -> startOverButton -> setDisabled(true);

    //Put the spinbox back to 1
    ui -> spinBox -> setValue(1);

    //Regenerate the ramdom number
    secretNumber = rand() % 10 + 1;

    //Clear the message label
    ui -> messageLabel -> setText("Please guess my Number!!");

}

