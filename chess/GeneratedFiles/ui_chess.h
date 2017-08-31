/********************************************************************************
** Form generated from reading UI file 'chess.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHESS_H
#define UI_CHESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chessClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *chessClass)
    {
        if (chessClass->objectName().isEmpty())
            chessClass->setObjectName(QStringLiteral("chessClass"));
        chessClass->resize(600, 400);
        centralWidget = new QWidget(chessClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 270, 75, 23));
        chessClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(chessClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        chessClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(chessClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        chessClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(chessClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        chessClass->setStatusBar(statusBar);

        retranslateUi(chessClass);

        QMetaObject::connectSlotsByName(chessClass);
    } // setupUi

    void retranslateUi(QMainWindow *chessClass)
    {
        chessClass->setWindowTitle(QApplication::translate("chessClass", "chess", Q_NULLPTR));
        pushButton->setText(QApplication::translate("chessClass", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chessClass: public Ui_chessClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHESS_H
