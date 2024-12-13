#include <iostream>
#include <cstdlib>// For random number
#include <ctime>
#include "DiceRolls.h"

const char GUESSNUMBER[] ="What is your number of guesses to a 100 rolls ? " ;
const char UNIQUE[] = "You're truly one of a kind";
const char GOOD[] ="Good";
const char DIS[] = "Disappointed";
using namespace std;

void DiceRolls::init() {
	srand(time(0));
};
void DiceRolls::ShowQuestion() {

	cout << GUESSNUMBER;
	cin >> guess;

};

bool DiceRolls::GetAnswer() {
	while (total <= 100)
	{
		die = (rand() % 6) + 1;
		total += die;
		rolls++;
		cout << "You rolled " << die << "\t\t" << "Running Total = " << total << endl;
	};

	range = guess - rolls;
	if (range == 0)
	{
		cout << UNIQUE << endl;
		return true;
	}

	else if (range > 0 && range == 5) {
		cout << GOOD << endl;
		return false;
	}

	else {
		cout <<DIS<< endl;
		return false;
	};
};

int DiceRolls::ShowResult()
{
	cout << "It took " << rolls << " rolls." << endl;
	count++;
	return count;
};