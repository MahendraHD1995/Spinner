#include "mainwindow1.h"

mainwindow1::mainwindow1(MainWindow *w2)
{
 this->w1 = w2;
}


void mainwindow1::run(){
    qDebug() << "hello from worker thread " << thread()->currentThreadId();

    while(1){

        w1->view->rotate(-30);

        qDebug()<<"output";

        QThread::usleep(1000000);
    }

}
