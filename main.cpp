#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "aaa";
    qDebug() << "bbbbb";

    return a.exec();
}
