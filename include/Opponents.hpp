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
		std::shared_ptr<QLabel> up, down;
	};
}
class Opponents:public QWidget
{
	Q_OBJECT
public:
	Opponents(QWidget*, void*parent);
	void paint_cards();
	void handleEvent(QKeyEvent* k);
	int get_opponents_number();
private:
	void* parent_;
	std::array<pair_ns::pair, 7 > cards_;
	int nr_cards_;
};

