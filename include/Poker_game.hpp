#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Poker_game.hpp"
#include<qpushbutton.h>
#include"opponents.hpp"
#include"card.hpp"
#include"table.hpp"
#include"Probability.hpp"
#include"Probability_calculator.hpp"
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
