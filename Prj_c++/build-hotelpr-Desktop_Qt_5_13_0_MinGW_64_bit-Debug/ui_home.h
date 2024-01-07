/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *logout;

    void setupUi(QDialog *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName(QString::fromUtf8("home"));
        home->resize(650, 450);
        pushButton = new QPushButton(home);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(29, 350, 591, 51));
        pushButton_2 = new QPushButton(home);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 240, 161, 71));
        pushButton_3 = new QPushButton(home);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(460, 150, 161, 71));
        pushButton_4 = new QPushButton(home);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(460, 60, 161, 71));
        label = new QLabel(home);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 421, 281));
        label->setStyleSheet(QString::fromUtf8("image :url(:/res/pic1.jpg)"));
        logout = new QPushButton(home);
        logout->setObjectName(QString::fromUtf8("logout"));
        logout->setGeometry(QRect(490, 10, 93, 28));

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QDialog *home)
    {
        home->setWindowTitle(QCoreApplication::translate("home", "SerenityScape", nullptr));
        pushButton->setText(QCoreApplication::translate("home", "Affichage de l'historique de reservation", nullptr));
        pushButton_2->setText(QCoreApplication::translate("home", "Disponibilite", nullptr));
        pushButton_3->setText(QCoreApplication::translate("home", "Reservation", nullptr));
        pushButton_4->setText(QCoreApplication::translate("home", "Client", nullptr));
        label->setText(QString());
        logout->setText(QCoreApplication::translate("home", "Logout Admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
