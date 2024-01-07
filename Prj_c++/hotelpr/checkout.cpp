#include "checkout.h"
#include "ui_checkout.h"
#include<QTableView>

checkout::checkout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkout)
{
    ui->setupUi(this);
}

checkout::~checkout()
{
    delete ui;
}

void checkout::on_pushButton_2_clicked()
{

            QString que3,que4,res;
            int res1;
            int eyed=ui->lineEdit_3->text().toInt();


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

            QSqlQuery query3,query4;

            que4="SELECT id_chamb FROM reservation WHERE id_res= :eyed ";
            query4.prepare(que4);
            query4.bindValue(":eyed",eyed);
            query4.exec();
            query4.next();

            res1=query4.value(0).toInt();

            qDebug()<<"Halo"<<res1;
            qDebug()<<"Halo"<<eyed;





            /*que3="SELECT emaili_cli FROM reservation WHERE id_us=18  ";
            query3.exec(que3);
            query3.next();

            res=query3.value(0).toString();

            qDebug()<<"Halo"<<res;*/




    //query3 = QSqlQuery(database);

            /*query3.prepare("SELECT emaili_cli FROM user WHERE id_us='18'  ");
            query3.exec();
            query3.next();*/

}

void checkout::affres(){

    /*QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/Kamal/Videos/qtpr/qtdb/hotel.db");

    if (!QFile::exists("C:/Users/Kamal/Videos/qtpr/qtdb/hotel.db")) {
        qDebug() << "Database file does not exist";
        return;
    }

    if (!database.open()) {
        qDebug() << "Erreur : impossible d'ouvrir la base de données";
        return;
    }



    QSqlQuery req;
    int ligne (0);
    req.exec("select count(*) from reservation");
    while (req.next()) {
        ligne=req.value(0).toInt();
    }


    mod = new QStandardItemModel (ligne, 7);
    int row(0);
    req.exec("select id_res, date_arrivee, date_depart, id_etat, id_clt, id_chamb,id_fact from reservation");
    while (req.next()) {

        for (int j=0 ;j<7;j++) {

            QStandardItem *item = new QStandardItem(req.value (j).toString()) ;
            mod->setItem(row,j,item);
        }
        row++;

    }

        mod->setHeaderData (0, Qt::Horizontal, "N°rervation");
        mod->setHeaderData (1, Qt::Horizontal, "Date arrivee");
        mod->setHeaderData (2, Qt::Horizontal, "Date depart");
        mod->setHeaderData (3, Qt::Horizontal, "Etat chambre");
        mod->setHeaderData (4, Qt::Horizontal, "N° client");
        mod->setHeaderData (5, Qt::Horizontal, "N° chambre");
         mod->setHeaderData (6, Qt::Horizontal, "N° fact");
        //ui->tableView->setModel(mod);
         */

}
void checkout::on_pushButton_clicked()
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



    QSqlQuery req;
    int ligne (0);
    req.exec("select count(*) from reservation");
    while (req.next()) {
        ligne=req.value(0).toInt();
    }


    mod = new QStandardItemModel (ligne, 6);
    int row(0);
    req.exec("select id_res, date_arrivee, date_depart, id_clt, id_chamb,id_fact from reservation");
    while (req.next()) {

        for (int j=0 ;j<6;j++) {

            QStandardItem *item = new QStandardItem(req.value (j).toString()) ;
            mod->setItem(row,j,item);
        }
        row++;

    }

          //QTableView *Ui_checkout::;

        mod->setHeaderData (0, Qt::Horizontal, "N°rervation");
        mod->setHeaderData (1, Qt::Horizontal, "Date arrivee");
        mod->setHeaderData (2, Qt::Horizontal, "Date depart");
        mod->setHeaderData (3, Qt::Horizontal, "N° client");
        mod->setHeaderData (4, Qt::Horizontal, "N° chambre");
         mod->setHeaderData (5, Qt::Horizontal, "N° fact");
        ui->tableView->setModel(mod);


}
