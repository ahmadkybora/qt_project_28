#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QGraphicsScene"
#include "QGraphicsView"
#include "QBrush"
#include "QPen"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    s = new QGraphicsScene(this);
    ui->graphicsView ->setScene(s);

    QBrush    b(Qt::green);
    QPen      p(Qt::black);
    p.setWidth(5);

    rect = s->addRect(20, 20, 100, 50, p, b);
    rect->setFlag(QGraphicsItem::ItemIsMovable);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->graphicsView->rotate(45);
}
