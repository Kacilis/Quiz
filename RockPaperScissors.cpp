#include <iostream>
#include <ctime>
using namespace std;
#include "RockPaperScissors.h"

const char CHOOSE[] ="Choose (1) Rock, (2) Paper, or (3) Scissors: ";
const char INVALIDCHOICE[] = "Invalid choice. Please enter 1, 2, or 3.\n";
const char TIE[] = "It's a tie!\n";
const char WIN[] = "You win!\n";
const char LOSS[] = "Computer wins!\n";
const char YOU[] = "You chose: ";
const char COMPUTER[] = "Computer chose: ";

void RockPaperScissors::init() {
    srand(time(0));
    computer = rand() % 3 + 1;
};

void RockPaperScissors::ShowQuestion() {
    // Game loop
        // Get user's choice
        userChoice;
        cout << CHOOSE;
        cin >> userChoice;
        // Validate user input
        if (userChoice < 1 || userChoice > 3) {
            cout << INVALIDCHOICE;
        }
};
    bool RockPaperScissors::GetAnswer() {
        if (userChoice == computer) {
            cout << TIE;
            return true;
        }

        else if ((userChoice == 1 && computer == 3) || (userChoice == 2 && computer == 1) || (userChoice == 3 && computer == 2)) {
            cout << WIN;
            return false;
        }
        else {
            cout << LOSS;
            return false;
        }
    };

    int RockPaperScissors::ShowResult() {
        cout << WIN << (userChoice == 1 ? "Rock" : userChoice == 2 ? "Paper" : "Scissors") << endl;
        cout << COMPUTER<< (computer == 1 ? "Rock" : computer== 2 ? "Paper" : "Scissors") << endl;
        count++;
        return count;

    }