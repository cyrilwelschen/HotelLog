#include "mainwindow.h"
#include "loginwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow l;
    l.show();
    //MainWindow w;
    //w.show();

    return a.exec();
}
