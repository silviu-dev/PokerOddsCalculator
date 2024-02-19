#pragma once
#include<qobject.h>
#include<qpushbutton.h>
#include<ui_Poker_game.h>
enum State{ in_deck,on_table };
class card:public QWidget
{
	Q_OBJECT
public:
	card(char[], char*, QRect,void*);
	QRect position_in_deck;
	int position_in_deck_int;
	int position_on_table;
	QPushButton *face;
public slots:
	void click_slot();
private:
	State state;
	QWidget* parent;

};
