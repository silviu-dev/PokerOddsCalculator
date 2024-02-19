#include "card.h"
#include"Poker_game.h"
card::card(char text[],char*suit,  QRect geometry,void*parent)
{
    this->position_in_deck = geometry;
	state = in_deck;
    this->parent = ((Poker_game*)parent);
    face = new QPushButton((Poker_game*)parent);
    face->setFocusPolicy(Qt::NoFocus);
    face->setGeometry(geometry);
    QFont font;
    font.setPointSize(7);
    font.setBold(true);
    font.setWeight(75);
    face->setFont(font);
    face->setStyleSheet(suit);
    face->setText(text);
    face->show();
    QObject::connect(face, SIGNAL(clicked()), this, SLOT(click_slot()));
}
void card::click_slot()
{
    if (this->state == in_deck)
    {
        
        bool entered = false;
        entered = ((Poker_game*)(this->parent))->table->enter_on_table(this);
        if (entered==true)
        {
            this->state = on_table;
            QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        this->face->setFont(font);
        } 
    }
    else
        if (this->state == on_table)
        {
            QFont font;
            font.setPointSize(7);
            font.setBold(true);
            font.setWeight(75);
            this->face->setFont(font);
            this->state = in_deck;
            ((Poker_game*)(this->parent))->table->setPosition_off(this->position_on_table);
                this->face->setGeometry(this->position_in_deck);
        }
}