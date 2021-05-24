#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextEdit>
#include <QPushButton>
#include <QLabel>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    setUpUi();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setUpUi() {
    QFont labelFont("Times", 10 , QFont::Bold );
    QLabel * mLabel = new QLabel("This is my text", this);
    mLabel->setFont(labelFont);
    mLabel->move(100, 25);

    QTextEdit * textEdit = new QTextEdit(this);
    textEdit->resize(300, 150); // TextFieldの大きさの変更
    textEdit->move(10, 55);

    //1. textChanged
//    connect(textEdit, &QTextEdit::textChanged, [=]() {
//        qDebug() << "Text Changed";
//    });

    //2. Copy, Cut and Paste
    QPushButton * copyButton = new QPushButton("Copy", this);
    copyButton->setMinimumSize(50, 25);
    copyButton->move(10, 250);
    connect(copyButton, &QPushButton::clicked, [=]() {
        textEdit->copy();
    });

    QPushButton * cutButton = new QPushButton("Cut", this);
    cutButton->setMinimumSize(50, 25);
    cutButton->move(110, 250);
    connect(cutButton, &QPushButton::clicked, [=]() {
        textEdit->cut();
    });

    QPushButton * pasteButton = new QPushButton("Paste", this);
    pasteButton->setMinimumSize(50, 25);
    pasteButton->move(210, 250);
    connect(pasteButton, &QPushButton::clicked, [=]() {
        textEdit->paste();
    });

    // 3. Undo Redo
    QPushButton * undoButton = new QPushButton("Undo", this);
    undoButton->setMinimumSize(50, 25);
    undoButton->move(10, 280);
    connect(undoButton, &QPushButton::clicked, [=]() {
        textEdit->undo();
    });

    QPushButton * redoButton = new QPushButton("Redo", this);
    redoButton->setMinimumSize(50, 25);
    redoButton->move(110, 280);
    connect(redoButton, &QPushButton::clicked, [=]() {
        textEdit->redo();
    });

    // 4. Set text and html to the text edit
    QPushButton * plainTextButton = new QPushButton("Plain text", this);
    plainTextButton->setMinimumSize(100, 25);
    plainTextButton->move(10, 310);
    connect(plainTextButton, &QPushButton::clicked, [=]() {
        textEdit->setPlainText("Sed ut perspicaiatis unde ominsi ites natee jaskjfoiej ja jaufo j josdjf lajsd lkjsj jasjf ldfasdfasdfasfdasfasfa safasf  sd fasfasf as sd fasfds fsa wwe qsdagsa  sad sa ag");
    });

    QPushButton * htmlButton = new QPushButton("Html text", this);
    htmlButton->setMinimumSize(100, 25);
    htmlButton->move(120, 310);
    connect(htmlButton, &QPushButton::clicked, [=]() {
        textEdit->setHtml("<h1>Kigali Districts</h1><p>The city of Kigali has three districts : </br> <ul> <li>Gasabo</li> <li>Nyarugenge</li><li>kicukiro</li></ul></p>");
    });

    // 5. Grab text and html
    QPushButton * grabTextButton = new QPushButton("Grab text ", this);
    grabTextButton->setMinimumSize(100, 24);
    grabTextButton->move(10, 340);
    connect(grabTextButton, &QPushButton::clicked, [=]() {
        qDebug() << "The plain text inside the text edit is : " << textEdit->toPlainText();
    });

    QPushButton * grabHtmlButton = new QPushButton("Grab HTML ", this);
    grabHtmlButton->setMinimumSize(100, 24);
    grabHtmlButton->move(120, 340);
    connect(grabHtmlButton, &QPushButton::clicked, [=]() {
        qDebug() << "The html text inside the text edit is : " << textEdit->toHtml();
    });

    setFixedSize(400, 400); // Windowのサイズの指定
}

QSize MainWindow::sizeHint() const
{
    return QSize(1000, 800);
}
