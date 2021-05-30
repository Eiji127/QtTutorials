#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Declare the widget
    QWidget * widget = new QWidget(this);

    // Declare the layout for the widget
    QVBoxLayout * layout = new QVBoxLayout();

    layout->addWidget(new QPushButton("Button1", this));
    layout->addWidget(new QPushButton("Button2", this));
    layout->addWidget(new QPushButton("Button3", this));
    QPushButton * button4 = new QPushButton("Button4", this);
    connect(button4, &QPushButton::clicked, [=]() {
        qDebug() << "Button4 form custom tab clicked";
    });
    layout->addWidget(button4);
    layout->addSpacerItem(new QSpacerItem(100, 200));

    // Set the layout to the widget
    widget->setLayout(layout);

    // Add the widget to the layout
//    ui->tabWidget->addTab(widget, "Tab 4");
    ui->tabWidget->insertTab(1, widget, "Tab4");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tab1Button_clicked()
{
    qDebug() << "Tab1 Button Clicked";
}

