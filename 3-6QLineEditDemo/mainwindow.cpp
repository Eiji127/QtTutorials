#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // First Name
    QLabel * firstNameLabel = new QLabel("First Name", this);
    firstNameLabel->setMinimumSize(70, 50);
    firstNameLabel->move(10, 10);

    QLineEdit * firstNameLineEdit = new QLineEdit(this);
    firstNameLineEdit->setMinimumSize(80, 50);
    firstNameLineEdit->move(100, 10);

    // Last Name
    QLabel * lastNameLabel = new QLabel("Last Name", this);
    lastNameLabel->setMinimumSize(70, 50);
    lastNameLabel->move(10, 70);

    QLineEdit * lastNameLineEdit = new QLineEdit(this);
    lastNameLineEdit->setMinimumSize(80, 50);
    lastNameLineEdit->move(100, 70);

    // City
    QLabel * cityLabel = new QLabel("City", this);
    cityLabel->setMinimumSize(70, 50);
    cityLabel->move(10, 130);

    QLineEdit * cityLineEdit = new QLineEdit(this);
    cityLineEdit->setMinimumSize(80, 50);
    cityLineEdit->move(100, 130);


    QFont button1Font("Times", 20 , QFont::Bold );
    QPushButton * button = new QPushButton("Grab data", this);
    button->setFont(button1Font);
    button->move(80, 190);

    connect(button, &QPushButton::clicked, [=]() {
        QString firstName = firstNameLineEdit->text();
        QString lastName = lastNameLineEdit->text();
        QString city = cityLineEdit->text();

         if (!firstName.isEmpty() && !lastName.isEmpty() && !city.isEmpty()) {
             // If neither field is empty, we fall here
             qDebug() << "First name is : " << firstName;
             qDebug() << "Last name is : " << lastName;
             qDebug() << "city name is : " << city;
         } else {
             qDebug() << "One field is empty";
         }
    });

    // Respond to signals from QLineEdits
    // 1. cursorPositionChanged
//    connect(firstNameLineEdit, &QLineEdit::cursorPositionChanged, [=]() {
//        qDebug() << "The current cursor position is : " << firstNameLineEdit->cursorPosition();
//    });

    // 2. editingFinished
//    connect(firstNameLineEdit, &QLineEdit::editingFinished, [=]() {
//        qDebug() << "Editing finished : ";
//    });

    // 3. returnPressed
//    connect(firstNameLineEdit, &QLineEdit::returnPressed, [=]() {
//        qDebug() << "Return Pressed : ";
//    });

    // 4. selectionChanged
    connect(firstNameLineEdit, &QLineEdit::selectionChanged, [=]() {
        qDebug() << "Selection changed : ";
    });


}

MainWindow::~MainWindow()
{
    delete ui;
}

