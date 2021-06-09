#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

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


void MainWindow::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("Save File"),
                                                    "/",
                                                    tr("Image (*.png, *.xpm, *.jpg)")
                                                    );
    qDebug() << "Your chosed files are  : " << fileName;

//    // get Open FileNames
//    QStringList fileNames = QFileDialog::getOpenFileNames(this,
//                                                    "Select one or more files to open",
//                                                    "/",
//                                                    "Images (*.png *.xpm *.jpg) ;; Text files(* .txt)");
//    qDebug() << "Your chosed files are  : " << fileNames;

    // get Open FileName
//    QString fileName = QFileDialog::getOpenFileName(this,
//                                                    tr("Open file"),
//                                                    "/",
//                                                    tr("Images (*.png *.xpm *.jpg)"));
//    qDebug() << "Your chosed file is  : " << fileName;

    // get Existing Directory
//    QString dir = QFileDialog::getExistingDirectory(this,
//                                                    tr("Open Directory"),
//                                                    "/",
//                                                    QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
//    qDebug() << "Your chosed directory : " << dir;
}

