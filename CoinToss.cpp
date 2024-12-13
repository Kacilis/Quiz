#include <iostream>
#include <ctime>
#include <string>
#include "CoinToss.h"

const char HOT[] = "Heads or Tails? (H/T): ";
const char INVALID[] = "Invalid input. Please enter 'H' for Heads or 'T' for Tails.";
const char CORRECT[] = "You guessed correctly! It's ";
const char WRONG[] = "Sorry, you guessed wrong. It's ";
using namespace std;

void CoinToss::init() {
    srand(time(0));  // Seed the random number generator once
}

void CoinToss::ShowQuestion() {
    cout << HOT;
}

bool CoinToss::GetAnswer() {
   
    tossResult = rand() % 2;  // Random toss result: 0 for Heads, 1 for Tails
    result = tossResult;   // Use an integer variable for result (0: Heads, 1: Tails)
   
    cin >> guess;
    guess = toupper(guess);  // Convert to uppercase to handle 'h' and 't'

    if (guess != 'H' && guess != 'T') {
        cout <<INVALID<< endl;
        return false; // Invalid guess
    }

    if ((guess == 'H' && result == 0) || (guess == 'T' && result == 1)) {
        cout << CORRECT << (result == 0 ? "Heads" : "Tails") << endl;
        return true; // User guessed correctly
    }
    else {
        cout << WRONG << (result == 0 ? "Heads" : "Tails") << endl;
        return false; // User guessed incorrectly
    }
}

int CoinToss::ShowResult() {
    return 0;
}