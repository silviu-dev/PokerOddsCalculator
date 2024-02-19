#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Poker_game.h"
#include<qpushbutton.h>
#include"opponents.h"
#include"card.h"
#include"table.h"
#include"Probability.h"
#include"Probability_calculator.h"
class Poker_game : public QMainWindow
{
    Q_OBJECT
public:
    Probability_calculator* probability_calculator;
    Poker_game(QWidget *parent = Q_NULLPTR);
    opponents *opp;
    card* cards[53];
    void keyPressEvent(QKeyEvent* k);
    Table* table;
    Probability* probability;
    QLabel* tip;
private:
    Ui::Poker_gameClass ui;
    friend void create_cards(Poker_game*);
};
void create_cards(Poker_game*);
