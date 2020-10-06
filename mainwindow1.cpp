#include "mainwindow1.h"

mainwindow1::mainwindow1(MainWindow *w2)
{
 this->w1 = w2;
}


void mainwindow1::run(){
    qDebug() << "hello from worker thread " << thread()->currentThreadId();
   // MainWindow w;
    while(1){
        w1->view->centerOn(150,150);
        w1->view->rotate(-20);
        w1->view->rotate(-20);
        qDebug()<<"output";
        QThread::sleep(1);
    }
}
