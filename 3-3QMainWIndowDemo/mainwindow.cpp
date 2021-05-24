#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QMenuBar>
#include <QStatusBar>
#include <QDebug>
#include <QAction>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
   // add central widget
   QPushButton * button = new QPushButton("Hello", this);
   setCentralWidget(button);

   //Declare Quit Action
   QAction * quitAction = new QAction("Quit");
   connect(quitAction, &QAction::triggered, [=](){
       QApplication::quit();
   });

   // add menus
   menuBar()->setNativeMenuBar(false); // macではこれがないとmenuBarが表示されない
   QMenu  * fileMenu = menuBar()->addMenu("File");
   fileMenu->addAction(quitAction);
   menuBar()->addMenu("Edit");
   menuBar()->addMenu("Window");
   menuBar()->addMenu("Settings");
   menuBar()->addMenu("Help");

   // add status bar message
   statusBar()->showMessage("Uploading file...", 3000);
//   statusBar()->clearMessage();
}

MainWindow::~MainWindow()
{
    delete ui;
}

QSize MainWindow::sizeHint() const
{
    return QSize(1000, 800);
}

