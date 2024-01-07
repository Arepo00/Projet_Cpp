#ifndef SES_H
#define SES_H

#include <QDialog>


namespace Ui {
class ses;
}

class ses : public QDialog
{
    Q_OBJECT

public:
    explicit ses(QWidget *parent = nullptr);
    ~ses();
    QString emv;


private:
    Ui::ses *ui;
};

#endif // SES_H
