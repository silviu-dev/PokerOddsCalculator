#pragma once
#include <array>

class Probability_calculator
{
public: 
	  Probability_calculator(void* parent);
	  void calculate(const std::array<int,8>& hand, int playersNumber);
	  static int playersInitialNumber;
private:
	void* parent;
};