#pragma once
#include<qobject.h>
#include<qpushbutton.h>
#include<ui_Poker_game.hpp>
#include <string>
enum State{ in_deck,on_table };
class card:public QWidget
{
	Q_OBJECT
public:
	card(char[],const char*, QRect,void*);
	void writeNumber(QPixmap* pixmap,const char* text);
	QRect position_in_deck;
	int position_in_deck_int;
	int position_on_table;
	QPushButton *face;
	std::string suit_;
	std::string text_;
	QPixmap smallFaceIcon_;
public slots:
	void click_slot();
private:
	State state;
	QWidget* parent;

};
