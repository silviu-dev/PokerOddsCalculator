#include "Poker_game.hpp"
#include <QtWidgets/QApplication>
#include<fstream>
#include<iostream>
#include <QLabel>
#include"str.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Poker_game game;
	QPixmap backgroundImage("./forms/pokerTable.jpg");
	QSize newSize(800, 0);
    backgroundImage = backgroundImage.scaledToWidth(newSize.width());
  	QPalette palette;
    palette.setBrush(QPalette::Window, backgroundImage);
    game.setPalette(palette);
    game.show();
    return a.exec();
}
// str vect[1400];
// void read_distribution()
// {
// 	std::ifstream f("probabilitati6pre.txt");
// 	int I = 1;
// 	double aux;
// 	for (int i = 1; i < 52; i++)
// 	{
// 		for (int j = i + 1; j <= 52; j++, I++)
// 		{
// 			f >> vect[I].i >> vect[I].j >> vect[I].prob >> aux;
// 			std::cout<<vect[I].i<<"\n";
// 		}
// 	}
// 	for (int i = 1; i < I - 1; i++)
// 	{
// 		for (int j = i + 1; j < I; j++)
// 		{
// 			if (vect[i].prob > vect[j].prob)
// 			{
// 				str aux = vect[i];
// 				vect[i] = vect[j];
// 				vect[j] = aux;
// 			}
// 		}
// 	}
// }
