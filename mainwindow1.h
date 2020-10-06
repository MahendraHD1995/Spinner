#ifndef MAINWINDOW1_H
#define MAINWINDOW1_H

#include <QThread>
#include <QDebug>
#include <mainwindow.h>

class mainwindow1 : public QThread
{

    Q_OBJECT
private:
    void run();

public:
    MainWindow *w1;
    mainwindow1(MainWindow *w2);
};

#endif // MAINWINDOW1_H
