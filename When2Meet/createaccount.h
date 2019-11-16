#ifndef CREATEACCOUNT_H
#define CREATEACCOUNT_H

#include <QMainWindow>

namespace Ui {
class createAccount;
}

class createAccount : public QMainWindow
{
    Q_OBJECT

public:
    explicit createAccount(QWidget *parent = nullptr);
    ~createAccount();

private:
    Ui::createAccount *ui;
};

#endif // CREATEACCOUNT_H
