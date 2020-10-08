#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    scene = new QGraphicsScene(this);
    view = new  QGraphicsView(scene);
    view->show();
    square = new MySquare();
    scene->addItem(square);
}

void MainWindow::paintEvent(QPaintEvent *e)
{
//    QPainter painter(this);

//    QPolygon poly;
//    poly<<QPoint(10,10);
//    poly<<QPoint(10,100);
//    poly<<QPoint(100,10);
//    poly<<QPoint(100,100);

//    QPen linepen;
//    linepen.setWidth(8);
//    linepen.setColor(Qt::red);

//    painter.setPen(linepen);

//    painter.drawPolygon(poly);
}

MainWindow::~MainWindow()
{
}

