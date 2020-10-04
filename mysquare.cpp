#include "mysquare.h"


MySquare::MySquare()
{
    Pressed = false;
    setFlag(ItemIsMovable);
}

QRectF MySquare::boundingRect() const
{
    return QRectF(0,0,100,100);
}

void MySquare::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    QRectF rec = boundingRect();
    QBrush brush(Qt::blue);

    if(Pressed)
    {
        brush.setColor(Qt::red);
    }
    else
    {
        brush.setColor(Qt::green);
    }


    QRectF rectangle(10,10,300,300);

    int startAngle = 0 * 16;
    int spanAngle = 25 * 16;
    int startAngle2 = 30 * 16;
    int spanAngle2 = 25 * 16;
    int startAngle3 = 60 * 16;
    int spanAngle3 = 25 * 16;

    int startAngle4 = 90 * 16;
    int spanAngle4 = 25 * 16;
    int startAngle5 = 120 * 16;
    int spanAngle5 = 25 * 16;
    int startAngle6 = 150 * 16;
    int spanAngle6 = 25 * 16;

    int startAngle7 = 180 * 16;
    int spanAngle7= 25 * 16;
    int startAngle8 = 210 * 16;
    int spanAngle8 = 25 * 16;
    int startAngle9 = 240 * 16;
    int spanAngle9 = 25 * 16;

    int startAngle10 = 270 * 16;
    int spanAngle10 = 25 * 16;
    int startAngle11 = 300 * 16;
    int spanAngle11 = 25 * 16;
    int startAngle12 = 330 * 16;
    int spanAngle12 = 25 * 16;

    int startAngle13 = 0*16;
    int spanAngle13 = 360*16;

    painter->setBrush(Qt::cyan);
    painter->drawPie(rectangle, startAngle, spanAngle);
    painter->drawText(200,200, "Mahendra");



    painter->setBrush(Qt::red);
    painter->drawPie(rectangle, startAngle2, spanAngle2);

    painter->setBrush(Qt::green);
    painter->drawPie(rectangle, startAngle3, spanAngle3);

    painter->setBrush(Qt::blue);
    painter->drawPie(rectangle, startAngle4, spanAngle4);

    painter->setBrush(Qt::yellow);
    painter->drawPie(rectangle, startAngle5, spanAngle5);

    painter->setBrush(Qt::black);
    painter->drawPie(rectangle, startAngle6, spanAngle6);

    painter->setBrush(Qt::white);
    painter->drawPie(rectangle, startAngle7, spanAngle7);

    painter->setBrush(Qt::gray);
    painter->drawPie(rectangle, startAngle8, spanAngle8);

    painter->setBrush(Qt::darkBlue);
    painter->drawPie(rectangle, startAngle9, spanAngle9);

    painter->setBrush(Qt::darkMagenta);
    painter->drawPie(rectangle, startAngle10, spanAngle10);

    painter->setBrush(Qt::darkCyan);
    painter->drawPie(rectangle, startAngle11, spanAngle11);

    painter->setBrush(Qt::darkYellow);
    painter->drawPie(rectangle, startAngle12, spanAngle12);

    painter->setBrush(Qt::white);
    painter->setPen(Qt::black);
    painter->drawEllipse(rectangle.center(), 40, 40);
    painter->drawText(150,165,"Spin");

    //painter->Antialiasing;


}

void MySquare::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed = true;
    update();
    QGraphicsItem::mousePressEvent(event);
}

void MySquare::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed = false;
    update();
    QGraphicsItem::mouseReleaseEvent(event);
}
