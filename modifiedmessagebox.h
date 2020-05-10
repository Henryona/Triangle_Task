#ifndef MODIFIEDMESSAGEBOX_H
#define MODIFIEDMESSAGEBOX_H

#include <QWidget>
#include <QBrush>
#include <QPen>
#include <QPixmap>
#include <QWidget>
#include <QGraphicsScene>
QT_BEGIN_NAMESPACE
class QLabel;
class TriangleCanvas;
class Triangle;
QT_END_NAMESPACE

class Modifiedmessagebox : public QWidget
{
    Q_OBJECT
public:
    Modifiedmessagebox(double a, double b, double c, QWidget *parent = nullptr);

private:
    TriangleCanvas *trianglecanvas;
    QGraphicsScene  *scene;     // Объявляем графическую сцену
    Triangle        *triangle;  // и треугольник
    QGraphicsView* view;
    double a;
    double b;
    double c;
};

#endif // MODIFIEDMESSAGEBOX_H

