#include "infodialog.h"
#include "ui_infodialog.h"

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    QDialogButtonBox::StandardButton stdButton = ui->buttonBox->standardButton(button);

    if (stdButton == QDialogButtonBox::Ok) {
        qDebug() << "OK Button Clicked...";
        accept();
    }
    if (stdButton == QDialogButtonBox::Save) {
        qDebug() << "Save Button Clicked...";
    }
    if (stdButton == QDialogButtonBox::SaveAll) {
        qDebug() << "SaveAll Button Clicked...";
    }
    if (stdButton == QDialogButtonBox::Open) {
        qDebug() << "Open Button Clicked...";
    }
    if (stdButton == QDialogButtonBox::No) {
        qDebug() << "No Button Clicked...";
    }
    if (stdButton == QDialogButtonBox::NoToAll) {
        qDebug() << "NoToAll Button Clicked...";
    }
    if (stdButton == QDialogButtonBox::Cancel) {
        qDebug() << "Cancel Button Clicked...";
        reject();
    }
}

