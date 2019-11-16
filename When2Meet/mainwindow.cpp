#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <loginwindow.h>

mainWindow::mainWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainWindow)
{
    ui->setupUi(this);
}

mainWindow::~mainWindow()
{
    delete ui;
}

void mainWindow::on_pushButtonLogOff_clicked()
{
    QMessageBox::information(this, "Logging Out..", "You have successfully logged out!");
    this->close();
}
