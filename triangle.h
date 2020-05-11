#ifndef TRIANGLE_H
#define TRIANGLE_H


#include <QGraphicsItem>
#include <QPainter>

// Наследуемся от QGraphicsItem
class Triangle : public QGraphicsItem
{
public:
    Triangle(double B1, double C0, double C1);
    //~Triangle();
private:
    double B1;
    double C0;
    double C1;

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // TRIANGLE_H
