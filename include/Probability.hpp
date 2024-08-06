#pragma once
#include<qlabel.h>
class Probability
{
public:
	Probability(QRect geometry, void* parent);
	void setText(QString win, QString draw, QString cummulative);
private:
	QLabel* pWin_;
	QLabel* pDraw_;
	QLabel* pCummulated_;
};