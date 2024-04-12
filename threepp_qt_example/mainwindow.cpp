#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "openglwidget.h"

#include <QBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // put SimulationWindow into existing widgetGLWidget
    QBoxLayout *boxLayout = new QBoxLayout(QBoxLayout::LeftToRight, ui->centralwidget);
    boxLayout->setContentsMargins(0, 0, 0, 0);
    boxLayout->setSpacing(0);
    m_openglwidget = new openglwidget();
    boxLayout->addWidget(m_openglwidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}
