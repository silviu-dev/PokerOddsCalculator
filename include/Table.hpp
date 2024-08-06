#pragma once
#include<qrect.h>
#include <array>
#include"Card.hpp"

class Table :public QWidget
{
	Q_OBJECT
public:
	Table(QRect start, void *parent);
	bool enter_on_table(Card*);
	void setPosition_off(int);
	std::array<int,8> get_hand();
public slots:
	void reset_table();
private:
	void* parent_;
	QRect start_position_;
	Card *positions[9];
};
