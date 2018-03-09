#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    addButtons();
}

MainWindow::~MainWindow()
{
    delete ui;
}

inline void MainWindow::addButtons()
{
    connect(ui->serverButton, &QPushButton::clicked, this, &MainWindow::startServer);
    connect(ui->clientButton, &QPushButton::clicked, this, &MainWindow::startClient);
}


void MainWindow::startServer()
{

    server* s = new server();
    s->show();
}

void MainWindow::startClient()
{
    client* c = new client();
    c->show();
}

