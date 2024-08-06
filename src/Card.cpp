#include <QPixmap>
#include <QPainter>
#include <iostream>
#include"Poker_game.hpp"
#include "Card.hpp"

void Card::writeNumber(QPixmap* pixmap,const char* text)
{
    // Inițializăm QPainter pentru a desena pe pixmap
    QPainter painter(pixmap);
    painter.setRenderHint(QPainter::Antialiasing); // Activăm antialiasing pentru un desen mai neted


    // Setăm fontul și culoarea pentru text
    QFont font("Arial", 10);
    font.setBold(true);
    painter.setFont(font);
    painter.setPen(Qt::black); // Setăm culoarea textului la negru

    // Conversia numărului într-un QString
    QString numberString =  QString::fromUtf8(text);

    // Calculăm dimensiunea textului pentru a-l centra pe pixmap
    QFontMetrics fm(font);
    int textWidth = fm.horizontalAdvance(numberString);
    int textHeight = fm.height();
    int xPos = 0;
    int yPos = 10;

    // Desenăm textul pe pixmap
    painter.drawText(xPos, yPos, numberString);

    xPos = (pixmap->width() - textWidth)-1;
    yPos = (pixmap->height() + textHeight)-17;
    painter.drawText(xPos, yPos, numberString);
    painter.end();
}

Card::Card(char text[],const char*suit,  QRect geometry,void*parent)
{
    this->suit_=std::string(suit);
    this->text_=std::string(text);
    position_in_deck_ = geometry;
	state_ = in_deck;
    parent_ = ((Poker_game*)parent);
    face = new QPushButton((Poker_game*)parent);
    face->setFocusPolicy(Qt::NoFocus);
    face->setGeometry(geometry);
    face->setStyleSheet("background-color: white;");
    QPixmap image(suit);

    int borderWidth = 10;

    int newWidth = image.width() + 8 * borderWidth;
    int newHeight = image.height() + 20 * borderWidth;

    QPixmap borderedPixmap(newWidth, newHeight);
    borderedPixmap.fill(Qt::white);

    QPainter painter(&borderedPixmap);
    painter.drawPixmap(4*borderWidth, 10*borderWidth, image);

    QPixmap resizedImage = borderedPixmap.scaled(QSize(45, 45), Qt::KeepAspectRatio);

    writeNumber(&resizedImage, text);
    smallFaceIcon_ = resizedImage;
    face->setIcon(resizedImage);
    face->setIconSize(resizedImage.size());

    face->show();
    QObject::connect(face, SIGNAL(clicked()), this, SLOT(click_slot()));
}
void Card::click_slot()
{
    if (state_ == in_deck)
    {
        
        bool entered = false;
        entered = ((Poker_game*)(parent_))->table->enter_on_table(this);
        if (entered==true)
        {
            state_ = on_table;
        } 
    }
    else
        if (state_ == on_table)
        {
            face->setIcon(smallFaceIcon_);
            face->setIconSize(smallFaceIcon_.size());
            state_ = in_deck;
            ((Poker_game*)(parent_))->table->setPosition_off(this->position_on_table);
                this->face->setGeometry(position_in_deck_);
        }
}