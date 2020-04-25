#include <QtWidgets>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QWidget wgt;

    QWidget* pwgt1 = new QWidget(&wgt);
    QPalette pall;
    pall.setColor(pwgt1->backgroundRole(), Qt::blue);
    pwgt1->setPalette(pall);
    pwgt1->resize(100, 100);
    pwgt1->move(25, 25);
    pwgt1->setAutoFillBackground(true);

    QWidget* pwgt2 = new QWidget(&wgt);
    QPalette pal2;
    pal2.setBrush(pwgt2->backgroundRole(), QBrush(QPixmap("/home/henryona/Triangle_Task/someProject/stone.jpg")));
    pwgt2->setPalette(pal2);
    pwgt2->resize(200, 200);
    pwgt2->move(75, 75);
    pwgt2->setAutoFillBackground(true);

    wgt.resize(300, 300);
    wgt.show();

    return app.exec();
}
