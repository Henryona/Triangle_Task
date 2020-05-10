#include "modifiedmessagebox.h"
#include "triangledrawsolve.h"
#include <QtWidgets>
#include "triangle.h"
#include "trianglescale.h"


Modifiedmessagebox::Modifiedmessagebox(double a, double b, double c, QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Ответ");
    setFixedSize(400,400);

    //double a = 100;
    //double b = 150;
    //double c = 132.28756;

    std::vector<double> scaledSides = trianglescale(a, b, c);

    //std::vector<double> B = {0, c};

    auto C = triangledrawsolve(scaledSides[0], scaledSides[1], scaledSides[2]);
    scene = new QGraphicsScene();   // Инициализируем графическую сцену
    triangle = new Triangle(scaledSides[2], C[0], C[1]);      // Инициализируем треугольник
    scene->setSceneRect(-1,-1,300,300); // Устанавливаем область графической сцены
    scene->addItem(triangle);   // Добавляем на сцену треугольник
    triangle->setPos(0, 0);
    QGraphicsView* view = new QGraphicsView(scene);
    view->setScene(scene);

    QString answerText = "Треугольник со сторонами:  " + QString::number(a) + ", " + QString::number(b) + ", " + QString::number(c) + ": ";

    QLabel* answerLabel = new QLabel(answerText);
    QVBoxLayout* modifiedboxLayout = new QVBoxLayout;
    modifiedboxLayout->addWidget(answerLabel);
    modifiedboxLayout->addWidget(view);
    setLayout(modifiedboxLayout);
    show();
}

double valueAsDouble = 1.2;
QString valueAsString = QString::number(valueAsDouble);
