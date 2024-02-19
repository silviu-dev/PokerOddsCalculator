#include "opponents.h"
#include<qevent.h>
#include"Poker_game.h"
opponents::opponents(QWidget* par,void *parent)
{   
    this->parent = parent;
    this->nr_cards = 1;
    int distanta_intre = 70;
    int center = 200 - (nr_cards / 2) * distanta_intre;
    for (int i = 0; i <5; i++)
    {
        carti[i] = new pair_ns::pair;
        carti[i]->up = new QLabel(par);
        carti[i]->up->setGeometry(QRect(center, 135, 51, 71));
        carti[i]->up->setStyleSheet(QString::fromUtf8("image: url(:/Poker_game/spate_carte.jpg);"));
        carti[i]->down = new QLabel(par);
        carti[i]->down->setGeometry(QRect(center + 15, 135 + 15, 51, 71));
        carti[i]->down->setStyleSheet(QString::fromUtf8("image: url(:/Poker_game/spate_carte.jpg);"));
        center += distanta_intre;
        carti[i]->up->hide();
        carti[i]->down->hide();
    }
    paint_cards(nr_cards);
}
void opponents::paint_cards(int nr_cards)
{
    for (int i = 0; i <=4; i++)
    {
        carti[i]->up->hide();
        carti[i]->down->hide();
    }
    this->nr_cards = nr_cards;
    int distanta_intre = 70;
    int center = 200 - (nr_cards / 2) * distanta_intre;
    for (int i = 0; i <nr_cards; i++)
    {
        carti[i]->up->show();
        carti[i]->up->setGeometry(QRect(center, 135, 51, 71));
        carti[i]->down->show();
        carti[i]->down->setGeometry(QRect(center+ 15, 135 + 15, 51, 71));
        center += distanta_intre;
    }
}
void opponents::slot(QKeyEvent* k)
{
    if (k->key() == Qt::Key_Up)
    {
        if (nr_cards <5)
        {
            nr_cards++;
            paint_cards(nr_cards);
        }
    }
    else
        if (k->key() == Qt::Key_Down)
        {
            if (nr_cards > 1)
            {
                nr_cards--;
                paint_cards(nr_cards);
            }
        }
    ((Poker_game*)parent)->probability_calculator->calculate(

        ((Poker_game*)parent)->table->get_hand(), nr_cards);
}
int opponents::get_opponents_number()
{
    return nr_cards;
}