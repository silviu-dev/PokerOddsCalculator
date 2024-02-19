#pragma once
#include<qlabel.h>
#include <qobject.h>
namespace pair_ns
{
	class pair
	{
	public:
		pair()
		{
			up = NULL;
			down = NULL;
		}
		QLabel* up, * down;
	};
}
class opponents:public QWidget
{
	Q_OBJECT
public:
	opponents(QWidget*, void*parent);
	void paint_cards(int);
	void slot(QKeyEvent* k);
	int get_opponents_number();
private:
	void* parent;
	pair_ns::pair *carti[7];
	int nr_cards;
};

