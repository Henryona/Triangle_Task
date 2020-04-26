#include <QtWidgets>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    // задаём фоновую картинку
    QPixmap backgroundPic("/home/henryona/Triangle_Task/someProject/background.jpg");
    // задаём курсор
    QPixmap mainCursorPic("/home/henryona/Triangle_Task/someProject/cursor_knife.png");
    QPixmap editCursorPic("/home/henryona/Triangle_Task/someProject/cat.png");
    QCursor mainCur(mainCursorPic);
    QCursor editCur(editCursorPic);
    // основной виджет
    QWidget mainWgt;
    mainWgt.setFixedSize(700,150); // задаём размеры
    backgroundPic = backgroundPic.scaled(mainWgt.size(), Qt::IgnoreAspectRatio); // размер фонового изображения = размерам окна
    QPalette mainWidgetPal; // палитра с фоновым изображением
    mainWidgetPal.setBrush(mainWgt.backgroundRole(), QBrush(backgroundPic));
    mainWgt.setPalette(mainWidgetPal); // применяем палитру к основному виджету
    mainWgt.setCursor(mainCur);

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
    inputFirstVal->setCursor(editCur);
    firstSide->setFrameStyle(QFrame::Panel | QFrame::Raised);

    QLabel* secondSide = new QLabel("&Значение #2:");
    QLineEdit* inputSecondVal = new QLineEdit;
    secondSide->setBuddy(inputSecondVal);
    inputSecondVal->setCursor(editCur);
    secondSide->setFrameStyle(QFrame::Panel | QFrame::Raised);

    QLabel* thirdSide = new QLabel("&Значение #3:");
    QLineEdit* inputThirdVal = new QLineEdit;
    thirdSide->setBuddy(inputThirdVal);
    inputThirdVal->setCursor(editCur);
    thirdSide->setFrameStyle(QFrame::Panel | QFrame::Raised);

    QVBoxLayout* vertLayout = new QVBoxLayout();
    QHBoxLayout* horLayout = new QHBoxLayout();
    QHBoxLayout* hor2Layout = new QHBoxLayout();


    vertLayout->addWidget(lbl);
    horLayout->setSpacing(25);
    horLayout->addWidget(firstSide);
    horLayout->addWidget(secondSide);
    horLayout->addWidget(thirdSide);
    hor2Layout->setSpacing(25);
    hor2Layout->addWidget(inputFirstVal);
    hor2Layout->addWidget(inputSecondVal);
    hor2Layout->addWidget(inputThirdVal);
    vertLayout->addLayout(horLayout);
    vertLayout->addLayout(hor2Layout);
    mainWgt.setLayout(vertLayout);

    mainWgt.show();

    return app.exec();
}


