#include "Poker_game.h"
#include <QtWidgets/QApplication>
#include<fstream>
#include<iostream>
#include"str.h"
void citeste_distributie();
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Poker_game w;
	citeste_distributie();
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
