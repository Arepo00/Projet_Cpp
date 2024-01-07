#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "login.h"
#include "database.h"






namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_registre_clicked();

    void on_login_clicked();



private:
    Ui::MainWindow *ui;


    login *ptrlogin;
};

#endif // MAINWINDOW_H
