#pragma once
#include "NamedQuestion.h"
#include <iostream>
class DiceRolls :public NamedQuestion
{
private:
	int total = 0;
	int die = 0;
	int rolls = 0;
	int guess = 0;
	int range = 0;
	int count = 0;

public:
	void init();
	void ShowQuestion();
	bool GetAnswer();
	int ShowResult();
};