#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include <mysquare.h>
#include <QGraphicsScene>
#include <QGraphicsView>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QGraphicsView *view;
    ~MainWindow();


protected:
    void paintEvent(QPaintEvent *e);

private:
    QGraphicsScene *scene;

    MySquare *square;
};
#endif // MAINWINDOW_H
