#include "MyObject.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyObject obj;
    obj.start();

    return a.exec();
}
