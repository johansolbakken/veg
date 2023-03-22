#include "application.h"

#include <QApplication>
#include <QMainWindow>

int Application::run(int argc, char **argv)
{
    QApplication a(argc, argv);
    QMainWindow w;
    w.show();
    return a.exec();
}
