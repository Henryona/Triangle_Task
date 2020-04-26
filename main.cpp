#include <QtWidgets>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    // задаём фоновую картинку
    QPixmap backgroundPic("/home/henryona/Triangle_Task/someProject/background.jpg");
    // основной виджет
    QWidget mainWgt;
    mainWgt.setFixedSize(700,300); // задаём размеры
    backgroundPic = backgroundPic.scaled(mainWgt.size(), Qt::IgnoreAspectRatio); // размер фонового изображения = размерам окна
    QPalette mainWidgetPal; // палитра с фоновым изображением
    mainWidgetPal.setBrush(mainWgt.backgroundRole(), QBrush(backgroundPic));
    mainWgt.setPalette(mainWidgetPal); // применяем палитру к основному виджету

    // надпись
    QLabel* lbl = new QLabel(&mainWgt);
    lbl->setText("Введите три значения в форму ниже чтобы проверить,\nявляются ли они сторонами треугольника");
    QFont font = lbl->font();
    font.setPointSize(20); //установим высоту шрифта
    lbl->setAlignment(Qt::AlignCenter); // выравнивание по центру
    lbl->setFont(font); // применим фонт к надписи
    lbl->move(10, 10);
    //lbl->show();

    QLabel* firstSide = new QLabel("&Значение #1:");
    QLineEdit* inputFirstVal = new QLineEdit;
    firstSide->setBuddy(inputFirstVal);

    QLabel* secondSide = new QLabel("&Значение #2:");
    QLineEdit* inputSecondVal = new QLineEdit;
    secondSide->setBuddy(inputSecondVal);

    QLabel* thirdSide = new QLabel("&Значение #3:");
    QLineEdit* inputThirdVal = new QLineEdit;
    thirdSide->setBuddy(inputThirdVal);

    QVBoxLayout* sidesLayout = new QVBoxLayout;
    sidesLayout->addWidget(lbl);
    sidesLayout->addWidget(firstSide);
    sidesLayout->addWidget(inputFirstVal);
    sidesLayout->addWidget(secondSide);
    sidesLayout->addWidget(inputSecondVal);
    sidesLayout->addWidget(thirdSide);
    sidesLayout->addWidget(inputThirdVal);
    mainWgt.setLayout(sidesLayout);

    mainWgt.show();

    return app.exec();
}


