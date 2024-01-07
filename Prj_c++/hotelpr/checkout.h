#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <QDialog>
#include "database.h"
#include<QStandardItemModel>

namespace Ui {
class checkout;
}

class checkout : public QDialog
{
    Q_OBJECT

public:
    explicit checkout(QWidget *parent = nullptr);
    ~checkout();

private slots:
    void on_pushButton_2_clicked();
    void affres();



    void on_pushButton_clicked();

private:
    Ui::checkout *ui;
    QStandardItemModel *mod;
};

#endif // CHECKOUT_H
