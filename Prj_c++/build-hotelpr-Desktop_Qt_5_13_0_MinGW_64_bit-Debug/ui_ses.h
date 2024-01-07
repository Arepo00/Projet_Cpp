/********************************************************************************
** Form generated from reading UI file 'ses.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SES_H
#define UI_SES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ses
{
public:

    void setupUi(QDialog *ses)
    {
        if (ses->objectName().isEmpty())
            ses->setObjectName(QString::fromUtf8("ses"));
        ses->resize(400, 300);

        retranslateUi(ses);

        QMetaObject::connectSlotsByName(ses);
    } // setupUi

    void retranslateUi(QDialog *ses)
    {
        ses->setWindowTitle(QCoreApplication::translate("ses", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ses: public Ui_ses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SES_H
