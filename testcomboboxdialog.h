#ifndef TESTCOMBOBOXDIALOG_H
#define TESTCOMBOBOXDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class TestComboBoxDialog; }
QT_END_NAMESPACE

class TestComboBoxDialog : public QDialog
{
    Q_OBJECT

public:
    TestComboBoxDialog(QWidget *parent = nullptr);
    ~TestComboBoxDialog();

private slots:
    void on_comboBoxColor_currentIndexChanged(const QString &arg1);

private:
    Ui::TestComboBoxDialog *ui;
};
#endif // TESTCOMBOBOXDIALOG_H
