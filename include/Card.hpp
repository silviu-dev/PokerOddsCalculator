#pragma once
#include<qobject.h>
#include<qpushbutton.h>
#include<ui_Poker_game.hpp>
#include <string>

class Card:public QWidget
{
	Q_OBJECT
public:
	Card(char[],const char*, QRect,void*);
	void writeNumber(QPixmap* pixmap,const char* text);
	int position_in_deck_int;
	int position_on_table;
	QPushButton *face;
	std::string suit_;
	std::string text_;
public slots:
	void click_slot();
private:
	enum State{ in_deck,on_table };
	State state_;
	QWidget* parent_;
	QRect position_in_deck_;
	QPixmap smallFaceIcon_;
};
