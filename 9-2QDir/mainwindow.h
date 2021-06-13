#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_chooseDirButton_clicked();

    void on_createDirButton_clicked();

    void on_dirExistsButton_clicked();

    void on_dirOrfileButton_clicked();

    void on_folderContentsButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
