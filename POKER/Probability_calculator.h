#pragma once
class Probability_calculator
{
public: void calculate(int* hand, int playersNumber);
	  Probability_calculator(void* parent);
	  static int sterge;
	  static int playersInitialNumber;
private:
	void* parent;
};