#include "home.h"
#include "ui_home.h"

home::home(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);
    ptrcheck = new checkout();
}

home::~home()
{
    delete ui;
    delete ptrcheck;

}



void home::on_logout_clicked()
{
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
            database.setDatabaseName("C:/Users/Kamal/Videos/qtpr/qtdb/hotel.db");

            if (!QFile::exists("C:/Users/Kamal/Videos/qtpr/qtdb/hotel.db")) {
                qDebug() << "Database file does not exist";
                return;
            }

            if (!database.open()) {
                qDebug() << "Erreur : impossible d'ouvrir la base de données";
                return;
            }
    QSqlQuery query2;
    query2 = QSqlQuery(database);




   query2.prepare("DELETE FROM user");

    query2.exec();
    home::hide();
    //accept();
}

void home::on_pushButton_2_clicked()
{

    ptrcheck->show();
}
