/********************************************************************************
** Form generated from reading UI file 'Tree.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREE_H
#define UI_TREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TreeClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TreeClass)
    {
        if (TreeClass->objectName().isEmpty())
            TreeClass->setObjectName(QString::fromUtf8("TreeClass"));
        TreeClass->resize(600, 400);
        menuBar = new QMenuBar(TreeClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        TreeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TreeClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TreeClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TreeClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        TreeClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TreeClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TreeClass->setStatusBar(statusBar);

        retranslateUi(TreeClass);

        QMetaObject::connectSlotsByName(TreeClass);
    } // setupUi

    void retranslateUi(QMainWindow *TreeClass)
    {
        TreeClass->setWindowTitle(QCoreApplication::translate("TreeClass", "Tree", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TreeClass: public Ui_TreeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREE_H
