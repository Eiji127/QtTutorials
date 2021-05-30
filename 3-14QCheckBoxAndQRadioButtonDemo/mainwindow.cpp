#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QButtonGroup>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QButtonGroup * buttonGroup = new QButtonGroup(this);
    buttonGroup->addButton(ui->windowsCheckBox);
    buttonGroup->addButton(ui->macCheckBox);
    buttonGroup->addButton(ui->linuxCheckBox);

    buttonGroup->setExclusive(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_windowsCheckBox_toggled(bool checked)
{
    if (checked) {
        qDebug() << "DEBUG: Windows checkBox is Checked...";
    } else {
        qDebug() << "DEBUG: Windows checkBox is not Checked...";
    }
}


void MainWindow::on_beerCheckBox_toggled(bool checked)
{
    if (checked) {
        qDebug() << "DEBUG: Beer checkBox is Checked...";
    } else {
        qDebug() << "DEBUG: Beer checkBox is not Checked...";
    }
}


void MainWindow::on_aRadioButton_toggled(bool checked)
{
    if (checked) {
        qDebug() << "DEBUG: A radioButton is Checked...";
    } else {
        qDebug() << "DEBUG: A RadioButton is not Checked...";
    }
}


void MainWindow::on_grabDataButton_clicked()
{
    if (ui->windowsCheckBox->isChecked()) {
        qDebug() << "DEBUG: Windows checkBox is Checked...";
    } else {
        qDebug() << "DEBUG: Windows checkBox is not Checked...";
    }
}


void MainWindow::on_setStateButton_clicked()
{
    // Exclusive
    if (ui->windowsCheckBox->isChecked()) {
        ui->windowsCheckBox->setChecked(false);
    } else {
        ui->windowsCheckBox->setChecked(true);
    }

    // Non Exclusive checkBox group
    if (ui->beerCheckBox->isChecked()) {
        ui->beerCheckBox->setChecked(false);
    } else {
        ui->beerCheckBox->setChecked(true);
    }
}

