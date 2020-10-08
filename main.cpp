#include "mainwindow.h"

#include <QApplication>
//#include <QThread>
#include <arc.h>
#include <mainwindow1.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *w = new MainWindow;

    mainwindow1 thread(w);
    thread.start();

    qDebug() << "hello from GUI thread " << a.thread()->currentThreadId();

    return a.exec();
}
