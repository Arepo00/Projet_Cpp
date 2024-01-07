#include "ses.h"
#include "ui_ses.h"

ses::ses(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ses)
{
    ui->setupUi(this);
}

ses::~ses()
{
    delete ui;
}
