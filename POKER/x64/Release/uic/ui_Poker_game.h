/********************************************************************************
** Form generated from reading UI file 'Poker_game.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POKER_GAME_H
#define UI_POKER_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Poker_gameClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Poker_gameClass)
    {
        if (Poker_gameClass->objectName().isEmpty())
            Poker_gameClass->setObjectName(QString::fromUtf8("Poker_gameClass"));
        Poker_gameClass->resize(866, 474);
        centralWidget = new QWidget(Poker_gameClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 140, 81, 81));
        label->setStyleSheet(QString::fromUtf8("image: url(:/Poker_game/sageti.png);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(510, 300, 141, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(710, 300, 141, 21));
        label_3->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(500, 120, 351, 111));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        Poker_gameClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Poker_gameClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 866, 21));
        Poker_gameClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Poker_gameClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Poker_gameClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Poker_gameClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Poker_gameClass->setStatusBar(statusBar);

        retranslateUi(Poker_gameClass);

        QMetaObject::connectSlotsByName(Poker_gameClass);
    } // setupUi

    void retranslateUi(QMainWindow *Poker_gameClass)
    {
        Poker_gameClass->setWindowTitle(QCoreApplication::translate("Poker_gameClass", "Poker_game", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Poker_gameClass", "Probabiliate castig", nullptr));
        label_3->setText(QCoreApplication::translate("Poker_gameClass", "Probabiliate egal", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Poker_gameClass: public Ui_Poker_gameClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POKER_GAME_H
