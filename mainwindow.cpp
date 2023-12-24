#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "derived.h"
#include "modelc.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Derived d;
    // int x = 2;
    // d.mf1();
    // d.mf1(x);
    // d.mf3(x);
    Airplane *p = new ModelC;
    p->fly();
}

MainWindow::~MainWindow()
{
    delete ui;
}
