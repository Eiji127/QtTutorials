#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColorDialog>
#include <QSettings>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for (int i = 0; i < 9; i++) {
        colorList.append(Qt::white);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_1_clicked()
{
    QColor color = QColorDialog::getColor(colorList[0], this, "Choose Background Color");
    if (color.isValid()) {

        // Save the color in the list in memory
        colorList[0] = color;

        // Set background color to the button
        QString css = QString("background-color : %1").arg(color.name());
        ui->pushButton_1->setStyleSheet(css);
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QColor color = QColorDialog::getColor(colorList[1], this, "Choose Background Color");
    if (color.isValid()) {

        // Save the color in the list in memory
        colorList[1] = color;

        // Set background color to the button
        QString css = QString("background-color : %1").arg(color.name());
        ui->pushButton_2->setStyleSheet(css);
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    QColor color = QColorDialog::getColor(colorList[2], this, "Choose Background Color");
    if (color.isValid()) {

        // Save the color in the list in memory
        colorList[2] = color;

        // Set background color to the button
        QString css = QString("background-color : %1").arg(color.name());
        ui->pushButton_3->setStyleSheet(css);
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    QColor color = QColorDialog::getColor(colorList[3], this, "Choose Background Color");
    if (color.isValid()) {

        // Save the color in the list in memory
        colorList[3] = color;

        // Set background color to the button
        QString css = QString("background-color : %1").arg(color.name());
        ui->pushButton_4->setStyleSheet(css);
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    QColor color = QColorDialog::getColor(colorList[4], this, "Choose Background Color");
    if (color.isValid()) {

        // Save the color in the list in memory
        colorList[4] = color;

        // Set background color to the button
        QString css = QString("background-color : %1").arg(color.name());
        ui->pushButton_5->setStyleSheet(css);
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    QColor color = QColorDialog::getColor(colorList[5], this, "Choose Background Color");
    if (color.isValid()) {

        // Save the color in the list in memory
        colorList[5] = color;

        // Set background color to the button
        QString css = QString("background-color : %1").arg(color.name());
        ui->pushButton_6->setStyleSheet(css);
    }
}


void MainWindow::on_pushButton_7_clicked()
{
    QColor color = QColorDialog::getColor(colorList[6], this, "Choose Background Color");
    if (color.isValid()) {

        // Save the color in the list in memory
        colorList[6] = color;

        // Set background color to the button
        QString css = QString("background-color : %1").arg(color.name());
        ui->pushButton_7->setStyleSheet(css);
    }
}


void MainWindow::on_pushButton_8_clicked()
{
    QColor color = QColorDialog::getColor(colorList[7], this, "Choose Background Color");
    if (color.isValid()) {

        // Save the color in the list in memory
        colorList[7] = color;

        // Set background color to the button
        QString css = QString("background-color : %1").arg(color.name());
        ui->pushButton_8->setStyleSheet(css);
    }
}


void MainWindow::on_pushButton_9_clicked()
{
    QColor color = QColorDialog::getColor(colorList[8], this, "Choose Background Color");
    if (color.isValid()) {

        // Save the color in the list in memory
        colorList[8] = color;

        // Set background color to the button
        QString css = QString("background-color : %1").arg(color.name());
        ui->pushButton_9->setStyleSheet(css);
    }
}


void MainWindow::on_loadColorsButton_clicked()
{
    setLoadedColor("pushButton_1", 0, ui->pushButton_1);
    setLoadedColor("pushButton_2", 0, ui->pushButton_2);
    setLoadedColor("pushButton_3", 0, ui->pushButton_3);
    setLoadedColor("pushButton_4", 0, ui->pushButton_4);
    setLoadedColor("pushButton_5", 0, ui->pushButton_5);
    setLoadedColor("pushButton_6", 0, ui->pushButton_6);
    setLoadedColor("pushButton_7", 0, ui->pushButton_7);
    setLoadedColor("pushButton_8", 0, ui->pushButton_8);
    setLoadedColor("pushButton_9", 0, ui->pushButton_9);
}


void MainWindow::on_saveColorsButton_clicked()
{
    for (int k = 0; k < 9; k++) {
        QString str = QString::number(k+1);
        saveColor("pushButton_" + str, colorList[k]);
    }
}

void MainWindow::saveColor(QString key, QColor color) {
    int red = color.red();
    int green = color.green();
    int blue = color.blue();

    QSettings settings("Ritsumeikan", "QSettings");
    settings.beginGroup("ButtonColor");
    settings.setValue(key + "r", red);
    settings.setValue(key + "g", green);
    settings.setValue(key + "b", blue);
    settings.endGroup();
}

QColor MainWindow::loadColor(QString key) {
    int red;
    int green;
    int blue;

    QSettings settings("Ritsumeikan", "QSettings");
    settings.beginGroup("ButtonColor");
    red = settings.value(key + "r", QVariant(0)).toInt();
    green = settings.value(key + "g", QVariant(0)).toInt();
    blue = settings.value(key + "b", QVariant(0)).toInt();
    settings.endGroup();

    return QColor(red, green, blue);
}

void MainWindow::setLoadedColor(QString key, int index, QPushButton *button)
{
    QColor color = loadColor(key);
    colorList[index] = color;
    QString css = QString("background-color : %1").arg(color.name());
    button->setStyleSheet(css);
}

