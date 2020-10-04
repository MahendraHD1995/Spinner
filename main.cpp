#include "mainwindow.h"

#include <QApplication>
#include <arc.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
   // w.view->show();
   // w.show();

//arc a1;

//    QPainterPath arc(QPoint(50,50));


//    arc.arcMoveTo(0,0,100,100,45);
//    arc.arcTo(0, 0,100,100,45, 100);

//    // fill
//    QPainterPath fill(QPoint(50,50));
//    fill.arcTo(0,0,100,100,45, 100);
//    fill.closeSubpath();

//    // total path
//    QPainterPath total = fill.united(arc);

//    //item with two paths
//    QGraphicsPathItem item(total);

//    item.setPen(QPen(QColor(0, 0, 0), 2));
//    item.setBrush(QBrush(QColor(100, 100, 100)));

//    // scene
//    QGraphicsScene scene;
//    scene.setSceneRect(-100, -100, 250.0, 250.0 );
//    scene.addItem(&item);

//    QGraphicsView view( &scene );
//    view.show();

    return a.exec();
}
