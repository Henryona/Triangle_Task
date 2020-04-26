#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*void MainWindow::resizeEvent(QResizeEvent *evt)
{
    QPixmap backgroundPic("/home/henryona/Triangle_Task/someProject/background.jpg");
    backgroundPic = backgroundPic.scaled(size(), Qt::IgnoreAspectRatio); // размер фонового изображения = размерам окна
    QPalette p ; // палитра с фоновым изображением
    p.setBrush(QPalette::Background, QBrush(backgroundPic));
    setPalette(p); // применяем палитру к основному виджету

    QMainWindow::resizeEvent(evt); //call base implementation
}*/
