#include "Probability.hpp"
Probability::Probability(QRect geometry, void* parent)
{
	QFont font;
	font.setFamily(QString::fromUtf8("Times New Roman"));
	font.setPointSize(14);
	this->pWin_ = new QLabel((QWidget*)parent);
	this->pWin_->setGeometry(geometry);
	this->pWin_->setFont(font);
	this->pWin_->setText("0%");
	this->pDraw_ = new QLabel((QWidget*)parent);
	this->pDraw_->setGeometry(*(new QRect(geometry.x()+200,geometry.y(),geometry.width(),geometry.height())));
	this->pDraw_->setFont(font);
	this->pDraw_->setText("0%");
	this->pCummulated_ = new QLabel((QWidget*)parent);
	this->pCummulated_->setGeometry(*(new QRect(geometry.x() + 100, geometry.y()+30, geometry.width(), geometry.height())));
	this->pCummulated_->setFont(font);
	this->pCummulated_->setText("0%");
}
void Probability::setText(QString win, QString draw, QString cummulative)
{
	pWin_->setText(win);
	pDraw_->setText(draw);
	pCummulated_->setText(cummulative);
}