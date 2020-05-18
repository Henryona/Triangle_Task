# encoding: UTF-8

from objectmaphelper import *
import __builtin__

main_window_MainWindow = {"name": "main_window", "type": "MainWindow", "visible": 1}
main_window_value_1_label_QLabel = {"name": "value_1_label", "type": "QLabel", "visible": 1, "window": main_window_MainWindow}
first_value_lineedit_QLineEdit = {"buddy": main_window_value_1_label_QLabel, "name": "first_value_lineedit", "type": "QLineEdit", "visible": 1}
main_window_value_2_label_QLabel = {"name": "value_2_label", "type": "QLabel", "visible": 1, "window": main_window_MainWindow}
second_value_lineedit_QLineEdit = {"buddy": main_window_value_2_label_QLabel, "name": "second_value_lineedit", "type": "QLineEdit", "visible": 1}
main_window_value_3_label_QLabel = {"name": "value_3_label", "type": "QLabel", "visible": 1, "window": main_window_MainWindow}
third_value_lineedit_QLineEdit = {"buddy": main_window_value_3_label_QLabel, "name": "third_value_lineedit", "type": "QLineEdit", "visible": 1}
main_window_check_buutton_QPushButton = {"name": "check_buutton", "type": "QPushButton", "visible": 1, "window": main_window_MainWindow}
answer_window_Modifiedmessagebox = {"name": "answer_window", "type": "Modifiedmessagebox", "visible": 1}
answer_window_view_of_triangle_QGraphicsView = {"name": "view_of_triangle", "type": "QGraphicsView", "visible": 1, "window": answer_window_Modifiedmessagebox}

'''
# главное окно
#main_window = findObject("{objectName='main_window', type='QWidget'}")
main_window = "{objectName='main_window', type='QWidget'}"
input_first_value_lineedit = "{objectName='first_value_lineedit', type='QLineEdit'}"
input_second_value_lineedit = "{objectName='second_value_lineedit', type='QLineEdit'}"
input_third_value_lineedit = "{objectName='third_value_lineedit', type='QLineEdit'}"

# объекты главного окна
inputs_values_label = findObject("{objectName='input_three_values_label', type='QLabel'}")
first_value_label = findObject("{objectName='value_1_label', type='QLabel'}")
second_value_label = findObject("{objectName='value_2_label', type='QLabel'}")
third_value_label = findObject("{objectName='value_3_label', type='QLabel'}")
input_first_value_lineedit = findObject("{objectName='first_value_lineedit', type='QLineEdit'}")
input_second_value_lineedit = findObject("{objectName='second_value_lineedit', type='QLineEdit'}")
input_third_value_lineedit = findObject("{objectName='third_value_lineedit', type='QLineEdit'}")
check_button = findObject("{objectName='check_buutton', type='QButton'}")

# дополнительное окно с ответом
modified_messagebox = findObject("{objectName='answer_window', type='QWidget'}")

# элементы дополнительного окна
scene = findObject("{objectName='graphic_scene_for_triangle', type='QGraphicsScene'}")
view = findObject("{objectName='view_of_triangle', type='QGraphicsView'}")
answer_label = findObject("{objectName='answer_tringle_sizes_label', type='QLabel'}")
type_answer_label = findObject("{objectName='answer_triangle_types_label', type='QLabel'}")

# остальные message boxes
trash_in_data_message_box = findObject("{objectName='trash_in_data_message_box', type='QMessageBox'}")
negative_in_data_message_box = findObject("{objectName='negative_in_data_message_box', type='QMessageBox'}")'''