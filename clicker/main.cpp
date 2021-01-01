#include "clicker.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    clicker w;
    w.show();
    return a.exec();
}
