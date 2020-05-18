#include "mainwindow.h"
#include "trianglemaincheck.h"
#include <QtWidgets>
#include "modifiedmessagebox.h"
//#include "background.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Треугольник?");
    createFormInterior();
}

void MainWindow::createFormInterior()
{
    // задаём фоновую картинку
    //QPixmap backgroundPic(QApplication::applicationDirPath() + \
                    QDir::toNativeSeparators(QDir::separator()) + "background.jpg");
    // задаём курсор
    //QPixmap mainCursorPic(QApplication::applicationDirPath() + \
                          QDir::toNativeSeparators(QDir::separator()) + "cursor_knife.png");
    //QPixmap editCursorPic(QApplication::applicationDirPath() + \
                          QDir::toNativeSeparators(QDir::separator()) + "cat.png");
    //QCursor mainCur(mainCursorPic);
    //QCursor editCur(editCursorPic);

    //setFixedSize(700,170); // задаём размеры
    //backgroundPic = backgroundPic.scaled(size(), Qt::IgnoreAspectRatio); // размер фонового изображения = размерам окна
    //QPalette mainWidgetPal; // палитра с фоновым изображением
    //mainWidgetPal.setBrush(backgroundRole(), QBrush(backgroundPic));
    //setPalette(mainWidgetPal); // применяем палитру к основному виджету
    //setCursor(mainCur);

    // надпись
    QLabel* lbl = new QLabel("Введите три значения в форму ниже чтобы проверить,\nявляются ли они сторонами треугольника");
    lbl->setObjectName("input_three_values_label");
    QFont font = lbl->font();
    font.setPointSize(20); //установим высоту шрифта
    lbl->setAlignment(Qt::AlignCenter); // выравнивание по центру
    lbl->setFont(font); // применим фонт к надписи
    lbl->move(10, 10);
    //lbl->show();

    QLabel* firstSide = new QLabel("&Значение #1:");
    firstSide->setObjectName("value_1_label");

    inputFirstVal = new QLineEdit;
    inputFirstVal->setObjectName("first_value_lineedit");

    firstSide->setBuddy(inputFirstVal);
    //inputFirstVal->setCursor(editCur);
    firstSide->setFrameStyle(QFrame::Panel | QFrame::Raised);

    QLabel* secondSide = new QLabel("&Значение #2:");
    secondSide->setObjectName("value_2_label");

    inputSecondVal = new QLineEdit;
    inputSecondVal->setObjectName("second_value_lineedit");

    secondSide->setBuddy(inputSecondVal);
    //inputSecondVal->setCursor(editCur);
    secondSide->setFrameStyle(QFrame::Panel | QFrame::Raised);

    QLabel* thirdSide = new QLabel("&Значение #3:");
    thirdSide->setObjectName("value_3_label");

    inputThirdVal = new QLineEdit;
    inputThirdVal->setObjectName("third_value_lineedit");

    thirdSide->setBuddy(inputThirdVal);
    //inputThirdVal->setCursor(editCur);
    thirdSide->setFrameStyle(QFrame::Panel | QFrame::Raised);

    QPushButton* solverButton = new QPushButton("&Проверка!");
    solverButton->setObjectName("check_buutton");

    solverButton->setFixedSize(100,20);
    //connect(solverButton, SIGNAL(clicked()), qApp, SLOT(on_solverButton_clicked()));
    connect(solverButton, &QPushButton::clicked, this, &MainWindow::on_solverButton_clicked);

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
    vertLayout->addWidget(solverButton);
    setLayout(vertLayout);
}

void MainWindow::on_solverButton_clicked()
{
    do {
        QString firstInput = inputFirstVal->text();
        QString secondIntput = inputSecondVal->text();
        QString thirdIntput = inputThirdVal->text();
        if (!firstInput.toDouble() || !secondIntput.toDouble() || !thirdIntput.toDouble()) {
            //QMessageBox::critical(0, "Некорректные данные", "Вы ввели какой-то мусор!");
            QMessageBox trash_in_data_message;
            trash_in_data_message.setObjectName("trash_in_data_message_box");

            trash_in_data_message.setIcon(QMessageBox::Critical);
            trash_in_data_message.setText("Вы ввели какой-то мусор!");
            trash_in_data_message.setWindowTitle("Некорректные данные");
            trash_in_data_message.exec();
            break;
        }
        double firstValue = firstInput.toDouble();
        double secondValue = secondIntput.toDouble();
        double thirdValue = thirdIntput.toDouble();


        if (firstValue <= 0 || secondValue <= 0 || thirdValue <= 0) {
            //QMessageBox::critical(0, "Некорректные данные", "Стороны треугольника не могут быть отрицательными!");
            QMessageBox negative_in_data_message;
            negative_in_data_message.setObjectName("negative_in_data_message_box");

            negative_in_data_message.setIcon(QMessageBox::Critical);
            negative_in_data_message.setText("Стороны треугольника не могут быть отрицательными!");
            negative_in_data_message.setWindowTitle("Некорректные данные");
            negative_in_data_message.exec();
            break;
        }

        bool answer = trianglemaincheck(firstValue, secondValue, thirdValue);
        if (answer == true) {
            QString answer_text = "Числа " + firstInput + ", " + \
                                             secondIntput  + ", " + \
                                             thirdIntput + " - могут быть сторонами треугольника :)";
            //QMessageBox::information(0, "Ответ", answer_text);
            Modifiedmessagebox *modifiedmessagebox = new Modifiedmessagebox(firstValue, secondValue, thirdValue);
            modifiedmessagebox->setObjectName("answer_window");
            modifiedmessagebox->show();
        } else {
            QString answer_text = "Числа " + firstInput + ", " + \
                                             secondIntput  + ", " + \
                                             thirdIntput + " - не могут быть сторонами треугольника :(";
            QMessageBox::critical(0, "Ответ", answer_text);

        }
    }
    while(false);
}

/*void MainWindow::resizeEvent(QResizeEvent *evt)
{
    //const QImage backgroundImage ((const uchar*)gimp_image_1, width_1, height_1, QImage::Format_RGB32);
    //QPixmap backgroundPic (QPixmap::fromImage(backgroundImage));
    QPixmap backgroundPic(QApplication::applicationDirPath() + \
                    QDir::toNativeSeparators(QDir::separator()) + "background.jpg");
    backgroundPic = backgroundPic.scaled(size(), Qt::IgnoreAspectRatio); // размер фонового изображения = размерам окна
    QPalette p ; // палитра с фоновым изображением
    p.setBrush(QPalette::Background, QBrush(backgroundPic));
    setPalette(p); // применяем палитру к основному виджету

    QWidget::resizeEvent(evt); //call base implementation
}*/
