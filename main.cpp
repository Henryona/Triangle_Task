#include "mainwindow.h"
#include <QtWidgets>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    MainWindow window;
    window.setObjectName("main_window");
    window.show();

    return app.exec();
}


/*
 * главное окно
 * window.setObjectName("main_window");
 *
 * объекты главного окна
 * lbl->setObjectName("input_three_values_label");
 * firstSide->setObjectName("value_1_label");
 * secondSide->setObjectName("value_2_label");
 * thirdSide->setObjectName("value_3_label");
 * inputFirstVal->setObjectName("first_value_lineedit");
 * inputSecondVal->setObjectName("second_value_lineedit");
 * inputThirdVal->setObjectName("third_value_lineedit");
 * solverButton->setObjectName("check_buutton");
 *
 * дополнительное окно с ответом
 * modifiedmessagebox->setObjectName("answer_window");
 *
 * элементы дополнительного окна
 * scene->setObjectName("graphic_scene_for_triangle");
 * view->setObjectName("view_of_triangle");
 * answerLabel->setObjectName("answer_tringle_sizes_label");
 * secondLabel->setObjectName("answer_triangle_types_label");
 *
 * остальные message boxes
 * trash_in_data_message.setObjectName("trash_in_data_message_box");
 * negative_in_data_message.setObjectName("negative_in_data_message_box");
*/
