#include "modifiedmessagebox.h"
#include "triangledrawsolve.h"
#include <QtWidgets>
#include "triangle.h"
#include "trianglescale.h"
#include "trianglesecondarycheck.h"


Modifiedmessagebox::Modifiedmessagebox(double a, double b, double c, QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Ответ");
    setFixedSize(400,400);

    std::vector<double> scaledSides = trianglescale(a, b, c);

    auto C = triangledrawsolve(scaledSides[0], scaledSides[1], scaledSides[2]);
    scene = new QGraphicsScene();   // Инициализируем графическую сцену
    //triangle = new Triangle(scaledSides[2], C[0], C[1]);      // Инициализируем треугольник
    triangle = new Triangle(scaledSides[0], C[0], C[1]);      // Инициализируем треугольник
    scene->setSceneRect(-1,-1,300,300); // Устанавливаем область графической сцены
    scene->addItem(triangle);   // Добавляем на сцену треугольник
    triangle->setPos(0, 0);
    QGraphicsView* view = new QGraphicsView(scene);
    view->setScene(scene);

    QString answerText = "Треугольник со сторонами:  " + QString::number(a) + ", " + QString::number(b) + ", " + QString::number(c) + ": ";
    QString supportText = "Тип треугольника: " + trianglesecondarycheck(a, b, c);

    QLabel* answerLabel = new QLabel(answerText);
    QLabel* secondLabel = new QLabel(supportText);
    QVBoxLayout* modifiedboxLayout = new QVBoxLayout;
    modifiedboxLayout->addWidget(answerLabel);
    modifiedboxLayout->addWidget(secondLabel);
    modifiedboxLayout->addWidget(view);
    setLayout(modifiedboxLayout);
    show();
}

double valueAsDouble = 1.2;
QString valueAsString = QString::number(valueAsDouble);
