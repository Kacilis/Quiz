#include <iostream>
#include "CoinToss.h"
#include "RockPaperScissors.h"
#include "DiceRolls.h"
#include "NamedQuestion.h"
#include "GuessANumber.h"

int qt = 0;
int counter = 0;

using namespace std;

int main() {

	char playAgain = 'y';
	while (playAgain == 'y') {
		srand(time(0)); // Seed the random number generator
		int qt = rand() % 4 + 1;

		if (qt == 1) {
			class GuessANumber game;
			game.init();
			game.ShowQuestion();
			game.GetAnswer();
			game.ShowResult();
		}
		else if (qt == 2) {
			class CoinToss game;
			game.init();
			game.ShowQuestion();
			game.GetAnswer();
			game.ShowResult();
		}

		else if (qt == 3) {
			class DiceRolls game;
			game.init();
			game.ShowQuestion();
			game.GetAnswer();
			game.ShowResult();
		}

		else {
			class RockPaperScissors game;
			game.init();
			game.ShowQuestion();
			game.GetAnswer();
			game.ShowResult();
		}
		counter++;
		cout << "Play again? (y/n): ";
		cin >> playAgain;
	}
	cout <<"You played the game "<< counter <<" times" << endl;
	cout << "Thanks for playing!" << endl;
	return 0;
};