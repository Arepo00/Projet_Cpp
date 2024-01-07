#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

#include "database.h"
#include "home.h"
#include "ses.h"




namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();


private slots:
    void on_connect_clicked();

private:
    Ui::login *ui;
   ses u;
    home *ptrhome;
};

#endif // LOGIN_H
