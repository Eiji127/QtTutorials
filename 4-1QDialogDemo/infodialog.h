#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class InfoDialog;
}

class InfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InfoDialog(QWidget *parent = nullptr);
    ~InfoDialog();

    const QString &getFavoriteOs() const;

    const QString &getPosition() const;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    QString position;
    QString favoriteOs;
    Ui::InfoDialog *ui;
};

#endif // INFODIALOG_H
