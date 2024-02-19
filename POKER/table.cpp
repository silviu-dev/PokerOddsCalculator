#include "table.h"
#include<qrect.h>
#include"Poker_game.h"
int convert(int);
Table::Table(QRect start, void * parent)
{
	start_position = start;
	for (int i = 1; i <= 8; i++)
		positions[i] = NULL;
	this->parent = parent;
}
bool Table::enter_on_table(card* c)
{
	int i = 1;
	while (positions[i] !=NULL&&i<=7)
		i++;
	if (i > 7)
		return false;
	else
	{
		positions[i] = c;
		c->position_on_table = i;
		if (i <= 2)
		{
			c->face->setGeometry(QRect(start_position.left() + (i - 1) * (start_position.width() + 9) + 110, start_position.top() + 120, start_position.width(),
				start_position.height()));
		}
		else
		{
			c->face->setGeometry(QRect(start_position.left() + (i - 3) * (start_position.width() + 9), start_position.top(), start_position.width(),
				start_position.height()));
		}
		((Poker_game*)parent)->probability_calculator->calculate(
			get_hand(), ((Poker_game*)parent)->opp->get_opponents_number());
		return true;
	}
}
void Table::setPosition_off(int position)
{
	positions[position] = NULL;
	((Poker_game*)parent)->probability_calculator->calculate(
		get_hand(), ((Poker_game*)parent)->opp->get_opponents_number());
}
int* Table::get_hand()
{
	int nr = 0;
	int * hand = new int[10];
	while (positions[nr + 1] != NULL)
	{
		hand[nr + 1] = convert(positions[nr + 1]->position_in_deck_int);
		nr++;
	}
	hand[0] = nr;
	return hand;
}
int convert(int old)
{
	return ((old - 1) % 13) * 4 + (old - 1) / 13 + 1;
}
void Table::reset_table()
{
	int i = 1;
	while (positions[i] != NULL)
	{
		positions[i]->click_slot();
		i++;
	}
	((Poker_game*)parent)->probability_calculator->playersInitialNumber = 0;
}