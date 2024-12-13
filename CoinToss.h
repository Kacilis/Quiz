#pragma once
#include "NamedQuestion.h"
#include <iostream>
class CoinToss : public NamedQuestion {
private:
	int tossResult = 0;
	int count = 0;
	char guess;
	int result = 0;
public:
	void init();
	void ShowQuestion();
	bool GetAnswer();
	int ShowResult();
};