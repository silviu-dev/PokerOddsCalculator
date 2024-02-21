#include "Poker_game.hpp"
#include <QtWidgets/QApplication>
#include<fstream>
#include<iostream>
#include <QLabel>
#include"str.hpp"
void citeste_distributie();
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Poker_game w;
	citeste_distributie();
	QPixmap backgroundImage("./forms/pokerTable.jpg");
	QSize newSize(800, 0); // Specificăm doar lățimea, iar înălțimea va fi calculată automat
    backgroundImage = backgroundImage.scaledToWidth(newSize.width());
    // Creează o paletă și setează imaginea ca fundal pentru fereastră
  	QPalette palette;
    palette.setBrush(QPalette::Window, backgroundImage);
    w.setPalette(palette);
    w.show();
    return a.exec();
}
str vect[1400];
void citeste_distributie()
{
	std::ifstream f("probabilitati6pre.txt");
	int I = 1;
	double aux;
	for (int i = 1; i < 52; i++)
	{
		for (int j = i + 1; j <= 52; j++, I++)
		{
			f >> vect[I].i >> vect[I].j >> vect[I].prob >> aux;
		}
	}
	for (int i = 1; i < I - 1; i++)
	{
		for (int j = i + 1; j < I; j++)
		{
			if (vect[i].prob > vect[j].prob)
			{
				str aux = vect[i];
				vect[i] = vect[j];
				vect[j] = aux;
			}
		}
	}
}
