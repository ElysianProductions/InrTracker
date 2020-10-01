#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    main_frame = new QFrame(this);
    main_widget = new QStackedWidget();





}

MainWindow::~MainWindow()
{
    delete ui;
}


