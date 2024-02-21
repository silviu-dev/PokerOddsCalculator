#include "table.hpp"
#include<qrect.h>
#include <QPixmap>
#include <QPainter>
#include"Poker_game.hpp"
#include <iostream>
int convert(int);

void writeNumber(QPixmap* pixmap,const char* text)
{
    // Inițializăm QPainter pentru a desena pe pixmap
    QPainter painter(pixmap);
    painter.setRenderHint(QPainter::Antialiasing); // Activăm antialiasing pentru un desen mai neted


    // Setăm fontul și culoarea pentru text
    QFont font("Arial", 19);
    font.setBold(true);
    painter.setFont(font);
    painter.setPen(Qt::black); // Setăm culoarea textului la negru

    // Conversia numărului într-un QString
    QString numberString =  QString::fromUtf8(text);

    // Calculăm dimensiunea textului pentru a-l centra pe pixmap
    QFontMetrics fm(font);
    int textWidth = fm.horizontalAdvance(numberString);
    int textHeight = fm.height();
    int xPos = 3;
    int yPos = 18;

    // Desenăm textul pe pixmap
    painter.drawText(xPos, yPos, numberString);

    xPos = (pixmap->width() - textWidth)-4;
    yPos = (pixmap->height() + textHeight)-28;
    painter.drawText(xPos, yPos, numberString);
    painter.end();
}

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
		QPixmap image(c->suit_.c_str());



		 int borderWidth = 10;

	    int newWidth = image.width() + 16 * borderWidth;
	    int newHeight = image.height() + 30 * borderWidth;

	    // Creăm noul QPixmap cu dimensiunile calculate
	    QPixmap borderedPixmap(newWidth, newHeight);
	    borderedPixmap.fill(Qt::white); // Umplem pixmap-ul cu culoarea albă

	    // Desenăm pixmap-ul original în centrul noului QPixmap
	    QPainter painter(&borderedPixmap);
	    painter.drawPixmap(8*borderWidth, 15*borderWidth, image);

	    QPixmap resizedImage = borderedPixmap.scaled(QSize(85, 85), Qt::KeepAspectRatio);

		writeNumber(&resizedImage, c->text_.c_str());
		c->face->setIcon(resizedImage);
		c->face->setIconSize(resizedImage.size());

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