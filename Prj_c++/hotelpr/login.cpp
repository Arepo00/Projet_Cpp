#include "login.h"
#include "ui_login.h"


login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

    ptrhome = new home();
}

login::~login()
{
    delete ui;

    delete ptrhome;
}

void login::on_connect_clicked()
{
    QString email = ui->email->text();
    QString password = ui->password->text();


    if(email.isEmpty() || password.isEmpty()){
        QMessageBox::information(this,"Attention","Vous devez remplir tous les champs");
    }else {
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

                QSqlQuery query,query1;
                query = QSqlQuery(database);
                query1 = QSqlQuery(database);



               query.prepare("SELECT * FROM client WHERE email = :email AND password = :password");
                query.bindValue(":email", email);
                query.bindValue(":password", password);
                query.exec();




                /*query1.prepare("insert into user (emaili_cli) values('"+email+"')");
                query1.exec();*/





                if (query.exec()) {
                    if (query.next()) {
                        query1.prepare("insert into user (emaili_cli) values('"+email+"')");
                        query1.exec();
                        qDebug() << "Authentication successful";
                        ptrhome->show();
                    } else {
                        qDebug() << "Authentication failed";
                        QMessageBox::information(this,"Attention","Authentication failed");
                    }
                } else {
                    qDebug() << "Query execution failed: " << query.lastError().text();
                }

                database.close();


    }
}
