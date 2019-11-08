#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete  ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();
    if (username == "test" && password == "test123")
    {
        QMessageBox::information (this, "Login", "Login successful");
    }
    else
    {
       QMessageBox::warning (this, "Login", "Login failed, try again.");
    }
}
