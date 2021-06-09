#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Retrieve the palette for the label
    QPalette palette = ui->label->palette();

//    ui->label->setAutoFillBackground(true); // <- you also are able to set background color by checking box of autoFillBackground option in .ui file.

    // Modify the palette with our changes
    palette.setColor(QPalette::Window, Qt::blue);
    palette.setColor(QPalette::WindowText, Qt::red);

    // Reset the palette to the widget
    ui->label->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_activeButton_clicked()
{
    QPalette::ColorGroup activeButtonColorGroup = ui->activeButton->palette().currentColorGroup();
    QPalette::ColorGroup disabledButtonColorGroup = ui->disabledButton->palette().currentColorGroup();

    qDebug() << "Active button color group : " << activeButtonColorGroup ;
     qDebug() << "Disabled button color group : " << disabledButtonColorGroup ;
}

