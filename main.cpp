#include "calx.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    calx w;
    w.show();
    return a.exec();
}
