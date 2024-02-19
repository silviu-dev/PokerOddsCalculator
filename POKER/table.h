#pragma once
#include<qrect.h>
#include"card.h"
class Table :public QWidget
{
	Q_OBJECT
public:
	Table(QRect start, void *parent);
	bool enter_on_table(card*);
	void setPosition_off(int);
	int* get_hand();
public slots:
	void reset_table();
private:
	void* parent;
	QRect start_position;
	card *positions[9];
};
