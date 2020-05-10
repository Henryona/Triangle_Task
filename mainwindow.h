#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>

QT_BEGIN_NAMESPACE
class QLabel;
class QPushButton;
class QLineEdit;
QT_END_NAMESPACE

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private slots:
    void resizeEvent(QResizeEvent*);
    void on_solverButton_clicked();

private:
    void createFormInterior();
    QLineEdit *inputFirstVal;
    QLineEdit *inputSecondVal;
    QLineEdit *inputThirdVal;
    QPushButton *solverButton;
    //double *firstValue;
    //double *secondValue;
    //double *thirdValue;

};
#endif // MAINWINDOW_H
