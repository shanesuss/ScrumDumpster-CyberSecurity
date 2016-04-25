/*********************
 * Project 2
 *
 * Start Date - 4/25/2016
 *
 * Kayvon H
 * Shane S
 * Jake E
 * Omar K
 *
 ********************/

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
