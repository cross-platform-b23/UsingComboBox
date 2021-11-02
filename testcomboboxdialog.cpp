#include "testcomboboxdialog.h"
#include "ui_testcomboboxdialog.h"
#include <QtDebug>

TestComboBoxDialog::TestComboBoxDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TestComboBoxDialog)
{
    ui->setupUi(this);
    ui->comboBoxColor->addItem("Red", QString("Merah"));
    ui->comboBoxColor->addItem("Green", QString("Hijau"));
    ui->comboBoxColor->addItem("Blue", QString("Biru"));
}

TestComboBoxDialog::~TestComboBoxDialog()
{
    delete ui;
}


void TestComboBoxDialog::on_comboBoxColor_currentIndexChanged(const QString &arg1)
{
    QString data = ui->comboBoxColor->currentData().toString();
    qDebug() << "on_comboBoxColor_currentIndexChanged: " << arg1 << ", data: "<< data;
}


void TestComboBoxDialog::on_comboBoxColor_currentIndexChanged(int index)
{

}

