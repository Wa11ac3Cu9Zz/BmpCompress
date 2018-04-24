#include "bmpcompress.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BmpCompress w;
    w.show();

    return a.exec();
}
