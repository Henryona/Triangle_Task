#include "triangle.h"

Triangle::Triangle(double B1, double C0, double C1) :
    QGraphicsItem()
{
    this->B1 = B1;
    this->C0 = C0;
    this->C1 = C1;
}

QRectF Triangle::boundingRect() const
{
    return QRectF(-60,-15,40,60);   // Ограничиваем область, в которой лежит треугольник
}

void Triangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
        QPolygon polygon;   // Используем класс полигона, чтобы отрисовать треугольник
        // Помещаем координаты точек в полигональную модель
        polygon << QPoint(0, 0) << QPoint(0, B1) << QPoint(C0, C1);
        QPen pen;
        pen.setStyle(Qt::DashDotLine);
        pen.setWidth(3);
        painter->setBrush(QBrush(QColor(255, 0, 0, 127), Qt::Dense4Pattern));
        painter->setPen(QPen(Qt::blue, 3, Qt::DashDotLine));
        painter->drawPolygon(polygon);  // Рисуем треугольник по полигональной модели
        Q_UNUSED(option);
        Q_UNUSED(widget);
}
