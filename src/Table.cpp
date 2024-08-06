#include <qrect.h>
#include <QPixmap>
#include <QPainter>
#include <iostream>
#include "Poker_game.hpp"
#include "Table.hpp"
int convert(int);

void writeNumber(QPixmap* pixmap,const char* text)
{
    QPainter painter(pixmap);
    painter.setRenderHint(QPainter::Antialiasing);

    QFont font("Arial", 19);
    font.setBold(true);
    painter.setFont(font);
    painter.setPen(Qt::black);

    QString numberString =  QString::fromUtf8(text);

    QFontMetrics fm(font);
    int textWidth = fm.horizontalAdvance(numberString);
    int textHeight = fm.height();
    int xPos = 3;
    int yPos = 18;

    painter.drawText(xPos, yPos, numberString);

    xPos = (pixmap->width() - textWidth)-4;
    yPos = (pixmap->height() + textHeight)-28;
    painter.drawText(xPos, yPos, numberString);
    painter.end();
}

Table::Table(QRect start, void * parent)
{
	start_position_ = start;
	for (int i = 1; i <= 8; i++)
		positions[i] = NULL;
	parent_ = parent;
}
bool Table::enter_on_table(Card* c)
{
	int nrCard = 1;
	while (positions[nrCard] !=NULL&&nrCard<=7)
		nrCard++;
	if (nrCard > 7)
		return false;
	else
	{
		positions[nrCard] = c;
		c->position_on_table = nrCard;
		if (nrCard <= 2)
		{
			c->face->setGeometry(QRect(start_position_.left() + (nrCard - 1) * (start_position_.width() + 9) + 110, start_position_.top() + 120, start_position_.width(),
				start_position_.height()));
		}
		else
		{
			c->face->setGeometry(QRect(start_position_.left() + (nrCard - 3) * (start_position_.width() + 9), start_position_.top(), start_position_.width(),
				start_position_.height()));
		}
		QPixmap image(c->suit_.c_str());

		int borderWidth = 10;
	    int newWidth = image.width() + 16 * borderWidth;
	    int newHeight = image.height() + 30 * borderWidth;

	    QPixmap borderedPixmap(newWidth, newHeight);
	    borderedPixmap.fill(Qt::white);

	    QPainter painter(&borderedPixmap);
	    painter.drawPixmap(8*borderWidth, 15*borderWidth, image);

	    QPixmap resizedImage = borderedPixmap.scaled(QSize(85, 85), Qt::KeepAspectRatio);

		writeNumber(&resizedImage, c->text_.c_str());
		c->face->setIcon(resizedImage);
		c->face->setIconSize(resizedImage.size());

		((Poker_game*)parent_)->probability_calculator->calculate(
			get_hand(), ((Poker_game*)parent_)->opp->get_opponents_number());
		return true;
	}
}
void Table::setPosition_off(int position)
{
	positions[position] = NULL;
	((Poker_game*)parent_)->probability_calculator->calculate(
		get_hand(), ((Poker_game*)parent_)->opp->get_opponents_number());
}
std::array<int,8> Table::get_hand()
{
	int nr = 0;
	std::array<int,8> hand;
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
	((Poker_game*)parent_)->probability_calculator->playersInitialNumber = 0;
}