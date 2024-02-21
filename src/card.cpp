#include "card.hpp"
#include"Poker_game.hpp"
#include <QPixmap>
#include <QPainter>
#include <iostream>

void card::writeNumber(QPixmap* pixmap,const char* text)
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

card::card(char text[],const char*suit,  QRect geometry,void*parent)
{
    this->suit_=std::string(suit);
    this->text_=std::string(text);
    this->position_in_deck = geometry;
	state = in_deck;
    this->parent = ((Poker_game*)parent);
    face = new QPushButton((Poker_game*)parent);
    face->setFocusPolicy(Qt::NoFocus);
    face->setGeometry(geometry);
    face->setStyleSheet("background-color: white;");
    QPixmap image(suit);

    int borderWidth = 10;

    int newWidth = image.width() + 8 * borderWidth;
    int newHeight = image.height() + 20 * borderWidth;

    // Creăm noul QPixmap cu dimensiunile calculate
    QPixmap borderedPixmap(newWidth, newHeight);
    borderedPixmap.fill(Qt::white); // Umplem pixmap-ul cu culoarea albă

    // Desenăm pixmap-ul original în centrul noului QPixmap
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
void card::click_slot()
{
    if (this->state == in_deck)
    {
        
        bool entered = false;
        entered = ((Poker_game*)(this->parent))->table->enter_on_table(this);
        if (entered==true)
        {
            this->state = on_table;
        //     QFont font;
        // font.setPointSize(15);
        // font.setBold(true);
        // font.setWeight(QFont::Bold);
        // this->face->setFont(font);
        } 
    }
    else
        if (this->state == on_table)
        {
            face->setIcon(smallFaceIcon_);
            face->setIconSize(smallFaceIcon_.size());
            this->state = in_deck;
            ((Poker_game*)(this->parent))->table->setPosition_off(this->position_on_table);
                this->face->setGeometry(this->position_in_deck);
        }
}