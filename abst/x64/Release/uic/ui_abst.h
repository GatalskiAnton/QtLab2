/********************************************************************************
** Form generated from reading UI file 'abst.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABST_H
#define UI_ABST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_abstClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *abstClass)
    {
        if (abstClass->objectName().isEmpty())
            abstClass->setObjectName(QString::fromUtf8("abstClass"));
        abstClass->resize(600, 400);
        menuBar = new QMenuBar(abstClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        abstClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(abstClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        abstClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(abstClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        abstClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(abstClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        abstClass->setStatusBar(statusBar);

        retranslateUi(abstClass);

        QMetaObject::connectSlotsByName(abstClass);
    } // setupUi

    void retranslateUi(QMainWindow *abstClass)
    {
        abstClass->setWindowTitle(QCoreApplication::translate("abstClass", "abst", nullptr));
    } // retranslateUi

};

namespace Ui {
    class abstClass: public Ui_abstClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABST_H
