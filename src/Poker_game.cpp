#include "Poker_game.hpp"
#include<qevent.h>
#include<cstring>
#include <iostream>
Poker_game::Poker_game(QWidget *parent)
    : QMainWindow(parent)
{
   table = new Table(QRect(56, 250, 65, 95),this);
   ui.setupUi(this); 
   opp = new Opponents(ui.centralWidget,this);
   create_cards(this);
   probability = new Probability(QRect(540, 325, 141, 21), ui.centralWidget);
   tip = new QLabel(ui.centralWidget);
   tip->setGeometry(QRect(550, 170, 351, 111));
   tip->setAlignment(Qt::AlignLeading | Qt::AlignLeft | Qt::AlignTop);
   QFont font;
   font.setFamily(QString::fromUtf8("Times New Roman"));
   font.setPointSize(14);
   tip->setFont(font);
   tip->setText("");
   probability_calculator = new Probability_calculator(this);

}
void Poker_game::keyPressEvent(QKeyEvent* k)
{
    if (k->key() == Qt::Key_Up || k->key() == Qt::Key_Down)
        opp->handleEvent(k);
    else
        if (k->key() == Qt::Key_Space)
            table->reset_table();
}
void create_cards(Poker_game *parent)
{
    for (int i = 1; i <= 52; i++)
    {
        char aux[100]="";
        QRect *position;
        char image[120];
        if (i <= 26)
        {
            position = new QRect(10 + (i - 1) * 32, 10, 31, 45);
            if (i <= 13) {
                strcpy(image, "./forms/inima_neagra.png");
                if (i == 9)
                {
                    strcat(aux, "10\n\n\n     10");
                }
                else
                    if (i == 10) {
                        strcat(aux, "J\n\n\n       J");
                    }
                    else
                        if (i == 11) {
                            strcat(aux, "O\n\n\n       O");
                        }
                        else
                            if (i == 12) {
                                strcat(aux, "K\n\n\n       K");
                            }
                            else
                                if (i == 13)
                                {
                                    strcat(aux, "A\n\n\n       A");
                                }
                                else
                                {
                                    aux[0] = '0' + i + 1;
                                    aux[1] = 0;
                                    strcat(aux, "\n\n\n       ");
                                    aux[strlen(aux)] = '0' + i + 1;
                                    aux[strlen(aux)] = 0;
                                }
            }
            else
            {
                strcpy(image, "./forms/inima_rosie.png");
                if (i == 22)
                {
                    strcat(aux, "10\n\n\n     10");
                }
                else
                    if (i == 23) {
                        strcat(aux, "J\n\n\n       J");
                    }
                    else
                        if (i == 24) {
                            strcat(aux, "O\n\n\n       O");
                        }
                        else
                            if (i == 25) {
                                strcat(aux, "K\n\n\n       K");
                            }
                            else
                                if (i == 26)
                                {
                                    strcat(aux, "A\n\n\n       A");
                                }
                                else
                                {
                                    aux[0] = '0' + i -12;
                                    aux[1] = 0;
                                    strcat(aux, "\n\n\n       ");
                                    aux[strlen(aux)] = '0' + i -12;
                                    aux[strlen(aux)] = 0;
                                }
            }
        }
        else
        {
            position = new QRect(10 + (i - 27) * 32, 55, 31, 45);
            if (i <= 39) {
                strcpy(image, "./forms/romb.png");
                if (i == 35)
                {
                    strcat(aux, "10\n\n\n     10");
                }
                else
                    if (i == 36) {
                        strcat(aux, "J\n\n\n       J");
                    }
                    else
                        if (i == 37) {
                            strcat(aux, "O\n\n\n       O");
                        }
                        else
                            if (i == 38) {
                                strcat(aux, "K\n\n\n       K");
                            }
                            else
                                if (i == 39)
                                {
                                    strcat(aux, "A\n\n\n       A");
                                }
                                else
                                {
                                    aux[0] = '0' + i-25;
                                    aux[1] = 0;
                                    strcat(aux, "\n\n\n       ");
                                    aux[strlen(aux)] = '0' + i -25;
                                    aux[strlen(aux)] = 0;
                                }
            }
            else
            {
                strcpy(image, "./forms/trefla.png");
                if (i == 48)
                {
                    strcat(aux, "10\n\n\n     10");
                }
                else
                    if (i == 49) {
                        strcat(aux, "J\n\n\n       J");
                    }
                    else
                        if (i == 50) {
                            strcat(aux, "O\n\n\n       O");
                        }
                        else
                            if (i == 51) {
                                strcat(aux, "K\n\n\n       K");
                            }
                            else
                                if (i == 52)
                                {
                                    strcat(aux, "A\n\n\n       A");
                                }
                                else
                                {
                                    aux[0] = '0' + i -38;
                                    aux[1] = 0;
                                    strcat(aux, "\n\n\n       ");
                                    aux[strlen(aux)] = '0' +i-38;
                                    aux[strlen(aux)] = 0;
                                }
            }
        }
                            parent->cards[i] = new Card(aux, image, *position,parent);
                            parent->cards[i]->position_in_deck_int = i;
                            delete position;
    }
}