#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ptrlogin = new login();
}

MainWindow::~MainWindow()
{
    delete ui;

    delete ptrlogin;
}

void MainWindow::on_registre_clicked()
{
    QString nom = ui->nom->text();
    QString prenom = ui->prenom->text();
    QString email = ui->email->text();
    QString datenaissance = ui->datenaissance->text();
    QString tel = ui->tel->text();
    QString sexe = ui->sexe->currentText();
    QString password = ui->password->text();
    //usermail=ui->email->text();


    if (nom.isEmpty() || prenom.isEmpty() || email.isEmpty() || datenaissance.isEmpty() || tel.isEmpty() || password.isEmpty()) {
        QMessageBox::information(this,"Attention","Vous devez remplir tous les champs !!");
    } else {
        qDebug()<<"Nom : "<<nom<<" Prenom : "<<prenom<<" email : "<<email<<"date de naissance : "<<datenaissance<<" sexe :"<<sexe<<" password :"<<password;

        QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("C:/Users/Kamal/Videos/qtpr/qtdb/hotel.db");

        if (QFile::exists("C:/Users/Kamal/Videos/qtpr/qtdb/hotel.db"))
        {
            qDebug()<<"Database file exists";
        }
        else
        {
            qDebug()<<"erreur Database";
            return;
        }

        if(!database.open())
        {
            qDebug()<< "Erreur : impossible d'ouvrire Database";
        }
        else
        {
            qDebug()<<"Database est ouvert!";
        }

        QSqlQuery query;
        query = QSqlQuery(database);

        query.prepare("insert into client (nom,prenom,email,date_naissance,tel,sexe,password) values('"+nom+"','"+prenom+"','"+email+"','"+datenaissance+"','"+tel+"','"+sexe+"','"+password+"')");
        query.exec();
        qDebug()<<"last error :"<<query.lastError().text();
        database.close();

        ptrlogin->show();
    }
}

void MainWindow::on_login_clicked()
{
    ptrlogin->show();
}
