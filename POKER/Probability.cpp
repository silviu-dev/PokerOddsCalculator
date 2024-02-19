#include "Probability.h"
Probability::Probability(QRect geometry, void* parent)
{
	QFont font;
	font.setFamily(QString::fromUtf8("Times New Roman"));
	font.setPointSize(14);
	this->pCastig = new QLabel((QWidget*)parent);
	this->pCastig->setGeometry(geometry);
	this->pCastig->setFont(font);
	this->pCastig->setText("0%");
	this->pEgal = new QLabel((QWidget*)parent);
	this->pEgal->setGeometry(*(new QRect(geometry.x()+200,geometry.y(),geometry.width(),geometry.height())));
	this->pEgal->setFont(font);
	this->pEgal->setText("0%");
	this->pCumulat = new QLabel((QWidget*)parent);
	this->pCumulat->setGeometry(*(new QRect(geometry.x() + 100, geometry.y()+30, geometry.width(), geometry.height())));
	this->pCumulat->setFont(font);
	this->pCumulat->setText("0%");
}
void Probability::setText(QString casting, QString egal, QString cumulat)
{
	pCastig->setText(casting);
	pEgal->setText(egal);
	pCumulat->setText(cumulat);
}