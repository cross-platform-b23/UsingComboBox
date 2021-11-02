#include "testcomboboxdialog.h"
#include "ui_testcomboboxdialog.h"
#include <QtDebug>

TestComboBoxDialog::TestComboBoxDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TestComboBoxDialog)
{
    ui->setupUi(this);
}

TestComboBoxDialog::~TestComboBoxDialog()
{
    delete ui;
}


void TestComboBoxDialog::on_comboBoxColor_currentIndexChanged(const QString &arg1)
{
    qDebug() << "on_comboBoxColor_currentIndexChanged: " << arg1;
}

