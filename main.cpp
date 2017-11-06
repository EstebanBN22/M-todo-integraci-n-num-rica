#include "inte.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Inte w;
    w.show();

    return a.exec();
}
