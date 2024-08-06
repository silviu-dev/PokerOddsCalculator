#define _crt_secure_no_warnings
#include "Probability_calculator.hpp"
#include<qstring.h>
#include <stdlib.h>     
#include<random>
#include<time.h>
#include<fstream>
#include<map>
#include<chrono>
#include<string.h>
#include"str.hpp"
using namespace std::chrono;
using namespace std;
int carte_adversar1, carte_adversar2;
double prob = 0, drawProb = 0;
int strength(int);
int availableCards[53];
int myHand[8];
void dynamicProbability(int, int, int);
int is_three_of_a_kind(int[]);
int is_straight(int[]);
int is_two_pairs(int[]);
int is_one_pair(int[]);
#include"Poker_game.hpp"
int Probability_calculator::playersInitialNumber = 0;
Probability_calculator::Probability_calculator(void* parent)
{
	this->parent = parent;
}
void Probability_calculator::calculate(const std::array<int,8>& hand, int playersNumber)
{
	if (playersNumber+1 > playersInitialNumber)
		playersInitialNumber = playersNumber+1;
	int round = 0;
	if (hand[0] == 2 || hand[0] >= 5)
	{
		if (hand[0] == 2)
			round = 0;
		else
			round = hand[0] - 4;
		for (int i = 1; i <= 52; i++)
			availableCards[i] = 0;
		for (int i = 1; i <= hand[0]; i++)
		{ 
			myHand[i] = hand[i];
			availableCards[myHand[i]] = 1;
		}
		dynamicProbability(playersNumber+1, playersInitialNumber-(playersNumber+1), round);
		((Poker_game*)parent)->probability->setText(QString::number(prob*100)+"%", QString::number((drawProb-prob)*100)+"%", QString::number(drawProb*100)+"%");
		if(prob>=(double)1/(playersNumber+1))
		((Poker_game*)parent)->tip->setText("Bet, if opponent raises then bet");
		else
		{
			if((drawProb-prob)/2+prob>= (double)1 / (playersNumber + 1))
				((Poker_game*)parent)->tip->setText("Check, if opponent raises then bet");
			else
				((Poker_game*)parent)->tip->setText("Check, if opponent raises then fold");
		}
	}
	else
		if (hand[0] == 0)
		{
			((Poker_game*)parent)->probability->setText("0%","0%","0%");
			((Poker_game*)parent)->tip->setText("");
	}
}

/////////////////

int is_straight_flush(int mana_jucator[])
{
	int i, j, k, l, m;
	for (i = 3; i >= 1; i--)
	{
		for (j = 4; j >= i + 1; j--)
		{
			if ((mana_jucator[i] - 1) / 4 == (mana_jucator[j] - 1) / 4 - 1 &&
				mana_jucator[i] % 4 == mana_jucator[j] % 4)
				for (k = 5; k >= j + 1; k--)
				{
					if ((mana_jucator[j] - 1) / 4 == (mana_jucator[k] - 1) / 4 - 1 &&
						mana_jucator[j] % 4 == mana_jucator[k] % 4)
						for (l = 6; l >= k + 1; l--)
						{
							if ((mana_jucator[k] - 1) / 4 == (mana_jucator[l] - 1) / 4 - 1 &&
								mana_jucator[k] % 4 == mana_jucator[l] % 4)
								for (m = 7; m >= l + 1; m--)
								{
									if ((mana_jucator[l] - 1) / 4 == (mana_jucator[m] - 1) / 4 - 1 &&
										mana_jucator[l] % 4 == mana_jucator[m] % 4)
									{

										return (mana_jucator[m] - 1) / 4;
									}

									if ((mana_jucator[i] - 1) / 4 == 0 && mana_jucator[m] > 48 &&
										mana_jucator[i] % 4 == mana_jucator[m] % 4)
									{

										return (mana_jucator[l] - 1) / 4;
									}

								}
						}
				}
		}
	}
	return -1;
}
int is_four_of_a_kind(int mana_jucator[])
{
	int a = -1, b = -1;
	for (int i = 7; i >= 1; i--)
	{
		if (i >= 4 && (mana_jucator[i] - 1) / 4 == (mana_jucator[i - 1] - 1) / 4 &&
			(mana_jucator[i - 1] - 1) / 4 == (mana_jucator[i - 2] - 1) / 4 &&
			(mana_jucator[i] - 1) / 4 == (mana_jucator[i - 3] - 1) / 4)
		{
			a = (mana_jucator[i] - 1) / 4;
			i -= 3;
		}
		else
			if (b == -1)
				b = (mana_jucator[i] - 1) / 4;
		if (a != -1 && b != -1)
		{
			return a * 100 + b;
		}

	}
	return -1;
}
int is_full_house(int mana_jucator[])
{
	for (int i = 7; i > 2; i--)
	{
		if ((mana_jucator[i] - 1) / 4 == (mana_jucator[i - 1] - 1) / 4 &&
			(mana_jucator[i] - 1) / 4 == (mana_jucator[i - 2] - 1) / 4)// trei de un fel
		{
			for (int j = 7; j > 1; j--)
			{
				if ((mana_jucator[j] - 1) / 4 == (mana_jucator[j - 1] - 1) / 4 &&
					(mana_jucator[j] - 1) / 4 != (mana_jucator[i] - 1) / 4)
				{
					return ((mana_jucator[i] - 1) / 4) * 100 + ((mana_jucator[j] - 1) / 4);
				}
			}
		}
	}
	return -1;
}
int is_flush(int mana_jucator[])
{
	int negru = 0, rosu = 0, romb = 0, trefla = 0, cn, cr, cro, ct;
	for (int i = 7; i >= 1; i--)
	{
		if (mana_jucator[i] % 4 == 0)
		{
			negru++;
			if (negru == 1)
				cn = (mana_jucator[i] - 1) / 4;
		}
		else
			if (mana_jucator[i] % 4 == 1)
			{
				rosu++;
				if (rosu == 1)
					cr = (mana_jucator[i] - 1) / 4;
			}
			else
				if (mana_jucator[i] % 4 == 2)
				{
					romb++;
					if (romb == 1)
						cro = (mana_jucator[i] - 1) / 4;
				}
				else
					if (mana_jucator[i] % 4 == 3)
					{
						trefla++;
						if (trefla == 1)
							ct = (mana_jucator[i] - 1) / 4;
					}
	}
	if (negru > 4)
		return cn;
	else
		if (rosu > 4)
			return cr;
		else
			if (romb > 4)
				return cro;
			else
				if (trefla > 4)
					return ct;
	return -1;
}
int is_straight(int mana_jucator[])//to fix
{
	int i, j, k, l, m;
	for (i = 3; i >= 1; i--)
	{
		for (j = 4; j >= i + 1; j--)
		{
			if ((mana_jucator[i] - 1) / 4 == (mana_jucator[j] - 1) / 4 - 1)
				for (k = 5; k >= j + 1; k--)
				{
					if ((mana_jucator[j] - 1) / 4 == (mana_jucator[k] - 1) / 4 - 1)
						for (l = 6; l >= k + 1; l--)
						{
							if ((mana_jucator[k] - 1) / 4 == (mana_jucator[l] - 1) / 4 - 1)
								for (m = 7; m >= l + 1; m--)
								{
									if ((mana_jucator[l] - 1) / 4 == (mana_jucator[m] - 1) / 4 - 1)
										return (mana_jucator[m] - 1) / 4;
									if ((mana_jucator[i] - 1) / 4 == 0 && mana_jucator[m] > 48)
										return (mana_jucator[l] - 1) / 4;
								}
						}
				}
		}
	}
	return -1;
}
int is_three_of_a_kind(int mana_jucator[])
{

	int a = -1, b = -1, c = -1;
	for (int i = 7; i >= 3; i--)
	{
		if (a == -1 && (mana_jucator[i] - 1) / 4 == (mana_jucator[i - 1] - 1) / 4 && (mana_jucator[i - 1] - 1) / 4 == (mana_jucator[i - 2] - 1) / 4)
		{
			a = (mana_jucator[i] - 1) / 4;
			i -= 2;
		}
		else
			if (b == -1)
				b = (mana_jucator[i] - 1) / 4;
			else
				if (c == -1)
					c = (mana_jucator[i] - 1) / 4;
		if (a != -1 && b != -1 && c != -1)
			return a * 10000 + b * 100 + c;
	}
	return -1;
}
int is_two_pairs(int mana_jucator[])
{
	int nr = 0, a = 0, b = 0, c = -1;
	for (int i = 7; i > 1; i--)
	{
		if (nr < 2 && (mana_jucator[i] - 1) / 4 == (mana_jucator[i - 1] - 1) / 4)
		{
			nr++;
			if (nr == 1)//daca e prima pereche
				a = (mana_jucator[i] - 1) / 4;
			else
				if (nr == 2)
					b = (mana_jucator[i] - 1) / 4;
			i--;
		}
		else
			if (c == -1)
				c = (mana_jucator[i] - 1) / 4;
		if (nr == 2 && c != -1)
			return a * 10000 + b * 100 + c;
	}
	return -1;
}
int is_one_pair(int mana_jucator[])
{
	int a = -1, b = -1, c = -1, d = -1;
	for (int i = 7; i > 1; i--)
	{
		if (d == -1 && (mana_jucator[i] - 1) / 4 == (mana_jucator[i - 1] - 1) / 4)
		{
			d = (mana_jucator[i] - 1) / 4;
			i--;
		}
		else
			if (a == -1)
				a = (mana_jucator[i] - 1) / 4;
			else
				if (b == -1)
					b = (mana_jucator[i] - 1) / 4;
				else
					if (c == -1)
						c = (mana_jucator[i] - 1) / 4;
	}
	if (d != -1)
		return d * 1000000 + a * 10000 + b * 100 + c;
	return -1;
}
int strength(int p)//daca p=1 calculez taria mainii mele, altfel taria adversarului
{
	int mana[8], i, j, a;
	for (i = 1; i <= 7; i++)
		mana[i] = myHand[i];
	if (p == 2)
	{
		mana[1] = carte_adversar1;
		mana[2] = carte_adversar2;
	}
	for (i = 1; i < 7; i++)
	{
		for (j = i + 1; j <= 7; j++)
			if (mana[i] > mana[j])
			{
				a = mana[i];
				mana[i] = mana[j];
				mana[j] = a;
			}
	}
	////////////////////
	int cont1, cont2, cont3, cont4, cont5, cont7, cont6, cont8;
	cont8 = is_straight_flush(mana);
	if (cont8 > -1)
		return 1414282856 + cont8;

	cont7 = is_four_of_a_kind(mana);
	if (cont7 > -1)
		return 1414281442 + cont7;
	cont6 = is_full_house(mana);
	if (cont6 > -1)
	{
		return  1414280028 + cont6;
	}
	cont5 = is_flush(mana);
	if (cont5 > -1) {
		return 1414280014 + cont5;
	}
	cont4 = is_straight(mana);
	if (cont4 > -1)
		return 1414280000 + cont4;
	cont3 = is_three_of_a_kind(mana);
	if (cont3 > -1)
		return 1414140000 + cont3;
	cont2 = is_two_pairs(mana);
	if (cont2 > -1)
		return 1414000000 + cont2;
	cont1 = is_one_pair(mana);
	if (cont1 > -1)
		return 1400000000 + cont1;
	return ((mana[7] - 1) / 4) * 100000000 + ((mana[6] - 1) / 4) * 1000000 + ((mana[5] - 1) / 4) * 10000 +
		((mana[4] - 1) / 4) * 100 + ((mana[3] - 1) / 4);
}

void dynamicProbability(int nr_players, int nr_players_out, int round)
{
	default_random_engine generator;
	geometric_distribution<int>distribution(0.01);
	int handsOfPlayersOut[6] = {};
	srand(static_cast<unsigned int>(time(0)));
	int i = 1, j = 1, nr_games = 100000, t1, t2;//1000000
	double old_prob = 2;
	prob = 0, drawProb = 0;
	while (i <= nr_games)
	{
		for (int qq = 1; qq <= nr_players_out; qq++)
		{
			do {
				handsOfPlayersOut[qq] = rand() % 52 + 1;
			} while (availableCards[handsOfPlayersOut[qq]] == 1);
			availableCards[handsOfPlayersOut[qq]] = 1;
		}

		if (round == 0)
		{
			do {
				myHand[3] = rand() % 52 + 1;
			} while (availableCards[myHand[3]] == 1);
			availableCards[myHand[3]] = 1;
			do {
				myHand[4] = rand() % 52 + 1;
			} while (availableCards[myHand[4]] == 1);
			availableCards[myHand[4]] = 1;
			do {
				myHand[5] = rand() % 52 + 1;
			} while (availableCards[myHand[5]] == 1);
			availableCards[myHand[5]] = 1;
			do {
				myHand[6] = rand() % 52 + 1;
			} while (availableCards[myHand[6]] == 1);
			availableCards[myHand[6]] = 1;
			do {
				myHand[7] = rand() % 52 + 1;
			} while (availableCards[myHand[7]] == 1);
			availableCards[myHand[7]] = 1;
		}
		else
			if (round == 1)
			{
				do {
					myHand[6] = rand() % 52 + 1;
				} while (availableCards[myHand[6]] == 1);
				availableCards[myHand[6]] = 1;
				do {
					myHand[7] = rand() % 52 + 1;
				} while (availableCards[myHand[7]] == 1);
				availableCards[myHand[7]] = 1;
			}
			else
				if (round == 2)
				{
					do {
						myHand[7] = rand() % 52 + 1;
					} while (availableCards[myHand[7]] == 1);
					availableCards[myHand[7]] = 1;
				}
		int q = 1;
		t1 = strength(1);
		for (int Z = 1; Z < nr_players; Z++)
		{
			do {
				carte_adversar1 = rand() % 52 + 1;
			} while (availableCards[carte_adversar1] == 1);
			availableCards[carte_adversar1] = 1;
			do {
				carte_adversar2 = rand() % 52 + 1;
			} while (availableCards[carte_adversar2] == 1);
			availableCards[carte_adversar2] = 1;
			t2 = strength(2);
			availableCards[carte_adversar1] = 0;
			availableCards[carte_adversar2] = 0;
			if (t1 == t2)
				q = 0;
			else
				if (t1 < t2)
				{

					q = -1;
					break;
				}
		}
		if (q == 1)
		{
			prob++;
			drawProb++;
		}
		else
			if (q == 0)
			{
				drawProb++;
			}
		double aux = old_prob - (prob / j);
		if (aux < 0)
			aux = aux * (-1);
		if (aux < 0.00001)
			i++;
		else
			i = 1;
		old_prob = prob / j;
		j++;
		if (round == 0)
		{
			availableCards[myHand[3]] = 0;
			availableCards[myHand[4]] = 0;
			availableCards[myHand[5]] = 0;
			availableCards[myHand[6]] = 0;
			availableCards[myHand[7]] = 0;
		}
		else
			if (round == 1)
			{
				availableCards[myHand[6]] = 0;
				availableCards[myHand[7]] = 0;
			}
			else
				if (round == 2)
				{
					availableCards[myHand[7]] = 0;
				}
		for (int qq = 1; qq <= nr_players_out; qq++)
		{
			availableCards[handsOfPlayersOut[qq]] = 0;
			availableCards[handsOfPlayersOut[qq]] = 0;
		}
		if (j > 18446744073709551614)
			break;
	}
	prob /= ((double)j - 1);
	drawProb /= ((double)j - 1);
}
