#include<qevent.h>
#include"Poker_game.hpp"
#include "Opponents.hpp"

Opponents::Opponents(QWidget* par,void *parent):parent_(parent), nr_cards_(1)
{   
    int distanceBetween = 70;
    int center = 200 - (nr_cards_ / 2) * distanceBetween;
    for (int i = 0; i <5; i++)
    {
        cards_[i] = pair_ns::pair();
        cards_[i].up = std::make_shared<QLabel>(par);
        cards_[i].up->setGeometry(QRect(center, 135, 51, 71));
        cards_[i].up->setStyleSheet(QString::fromUtf8("image: url(./forms/spate_carte.jpg);"));
        cards_[i].down = std::make_shared<QLabel>(par);
        cards_[i].down->setGeometry(QRect(center + 15, 135 + 15, 51, 71));
        cards_[i].down->setStyleSheet(QString::fromUtf8("image: url(./forms/spate_carte.jpg);"));
        center += distanceBetween;
        cards_[i].up->hide();
        cards_[i].down->hide();
    }
    paint_cards();
}
void Opponents::paint_cards()
{
    for (int i = 0; i <=4; i++) // hide all cards
    {
        cards_[i].up->hide();
        cards_[i].down->hide();
    }
    int distanceBetween = 70;
    int center = 200 - (nr_cards_ / 2) * distanceBetween;
    for (int i = 0; i <nr_cards_; i++)
    {
        cards_[i].up->show();
        cards_[i].up->setGeometry(QRect(center, 135, 51, 71));
        cards_[i].down->show();
        cards_[i].down->setGeometry(QRect(center+ 15, 135 + 15, 51, 71));
        center += distanceBetween;
    }
}
void Opponents::handleEvent(QKeyEvent* k)
{
    if (k->key() == Qt::Key_Up)
    {
        if (nr_cards_ <5)
        {
            nr_cards_++;
            paint_cards();
        }
    }
    else
        if (k->key() == Qt::Key_Down)
        {
            if (nr_cards_ > 1)
            {
                nr_cards_--;
                paint_cards();
            }
        }
    ((Poker_game*)parent_)->probability_calculator->calculate(

        ((Poker_game*)parent_)->table->get_hand(), nr_cards_);
}
int Opponents::get_opponents_number()
{
    return nr_cards_;
}