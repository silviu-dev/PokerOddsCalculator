#pragma once
#include<qlabel.h>
class Probability
{
public:
	Probability(QRect geometry, void* parent);
	void setText(QString casting, QString egal, QString cumulat);
private:
	QLabel* pCastig;
	QLabel* pEgal;
	QLabel* pCumulat;
};