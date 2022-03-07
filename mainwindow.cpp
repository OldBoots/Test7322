#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsRectItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGraphicsScene *scene = new QGraphicsScene;
    QGraphicsRectItem *rect = new QGraphicsRectItem;
    scene->setSceneRect(0,0,500,500);
    rect->setBrush(Qt::red);
    rect->setRect(0,0,150,150);
    scene->addItem(rect);
    ui->graphicsView->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

