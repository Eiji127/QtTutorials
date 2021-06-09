#include "infodialog.h"
#include "ui_infodialog.h"

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent, Qt::WindowSystemMenuHint | Qt::WindowTitleHint),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_pushButton_clicked()
{

    // Collect information
    QString userPosition = ui->positionLineEdit->text();
    if (!userPosition.isEmpty()) {
        position = userPosition;

        if (ui->windowsRadioButton->isChecked()) {
            favoriteOs = "windows";
        }
        if (ui->macRadioButton->isChecked()) {
            favoriteOs = "mac";
        }
        if (ui->linuxRadioButton->isChecked()) {
            favoriteOs = "linux";
        }
    }

    // Accept the dialog
    accept();
}


void InfoDialog::on_pushButton_2_clicked()
{
    //
    reject();
}

const QString &InfoDialog::getPosition() const
{
    return position;
}

const QString &InfoDialog::getFavoriteOs() const
{
    return favoriteOs;
}

