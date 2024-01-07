#ifndef HOME_H
#define HOME_H

#include <QDialog>

#include "database.h"
#include "checkout.h"

namespace Ui {
class home;
}

class home : public QDialog
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = nullptr);
    ~home();

private slots:
    void on_logout_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::home *ui;
    checkout *ptrcheck;
};

#endif // HOME_H
