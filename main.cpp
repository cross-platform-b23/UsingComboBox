#include "testcomboboxdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestComboBoxDialog w;
    w.show();
    return a.exec();
}
