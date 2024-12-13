#pragma once
#include "NamedQuestion.h"
#include <iostream>
class RockPaperScissors : public NamedQuestion
{
private:
	int userChoice = 0;
	int computer = 0;
	int count = 0;

public:
	void init();
	void ShowQuestion();
	bool GetAnswer();
	int ShowResult();
};