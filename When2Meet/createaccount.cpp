#include "createaccount.h"
#include "ui_createaccount.h"

createAccount::createAccount(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::createAccount)
{
    ui->setupUi(this);
}

createAccount::~createAccount()
{
    delete ui;
}
