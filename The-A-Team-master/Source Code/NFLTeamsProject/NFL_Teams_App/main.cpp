#include "mainwindow.h"
#include "dbmanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    dbmanager::instance();

    MainWindow w;
    w.show();

    return a.exec();
}
