/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *nom;
    QLineEdit *prenom;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *email;
    QDateEdit *datenaissance;
    QComboBox *sexe;
    QLabel *label_4;
    QPushButton *registre;
    QLabel *label_5;
    QLineEdit *tel;
    QLabel *label_6;
    QPushButton *login;
    QLineEdit *password;
    QLabel *label_7;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 500);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 30, 721, 391));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 81, 21));
        nom = new QLineEdit(groupBox);
        nom->setObjectName(QString::fromUtf8("nom"));
        nom->setGeometry(QRect(170, 50, 471, 20));
        prenom = new QLineEdit(groupBox);
        prenom->setObjectName(QString::fromUtf8("prenom"));
        prenom->setGeometry(QRect(170, 90, 471, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 81, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 130, 81, 21));
        email = new QLineEdit(groupBox);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(170, 130, 471, 20));
        datenaissance = new QDateEdit(groupBox);
        datenaissance->setObjectName(QString::fromUtf8("datenaissance"));
        datenaissance->setGeometry(QRect(310, 250, 110, 22));
        sexe = new QComboBox(groupBox);
        sexe->addItem(QString());
        sexe->addItem(QString());
        sexe->setObjectName(QString::fromUtf8("sexe"));
        sexe->setGeometry(QRect(310, 290, 111, 22));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 250, 191, 21));
        registre = new QPushButton(groupBox);
        registre->setObjectName(QString::fromUtf8("registre"));
        registre->setGeometry(QRect(370, 340, 121, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        registre->setFont(font);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 290, 121, 21));
        tel = new QLineEdit(groupBox);
        tel->setObjectName(QString::fromUtf8("tel"));
        tel->setGeometry(QRect(170, 170, 471, 20));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 170, 141, 21));
        login = new QPushButton(groupBox);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(230, 340, 121, 41));
        login->setFont(font);
        password = new QLineEdit(groupBox);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(170, 210, 471, 20));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 210, 141, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SerenityScape", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Inscription :", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nom :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Prenom :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "E-mail :", nullptr));
        sexe->setItemText(0, QCoreApplication::translate("MainWindow", "Homme", nullptr));
        sexe->setItemText(1, QCoreApplication::translate("MainWindow", "Femme", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "Date de Naissance :", nullptr));
        registre->setText(QCoreApplication::translate("MainWindow", "REGISTRE", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Sexe :", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Telephone :", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Password :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
