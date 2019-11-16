#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>

namespace Ui {
class mainWindow;
}

class mainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit mainWindow(QWidget *parent = nullptr);
    ~mainWindow();

private slots:
    void on_treeViewSideMenu_clicked(const QModelIndex &index);

    void on_pushButtonLogOff_clicked();

private:
    Ui::mainWindow *ui;
};

#endif // MAINWINDOW_H
