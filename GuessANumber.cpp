#include "GuessANumber.h"
#include <cstdlib>// For random number
#include <iostream>
using namespace std;

const char GUESS[] = "Guess a number between 1 and 100: ";
const char CORRECTGUESS[] = "Congratulations! You guessed the number in ";
const char LESSGUESS[] = "Too low! Try again.";
const char HIGHERGUESS[] = "Too high! Try again.";

// Initializes the game by generating a random secret number and setting attempts to 0
void GuessANumber::init() {
    secretNumber = rand() % 100 + 1;
    attempts = 0;
}

// Asks the user to guess a number
void GuessANumber::ShowQuestion() {
    cout << GUESS;
}

// Gets the user's guess, checks if it is correct, and returns true if the guess is correct, false otherwise
bool GuessANumber::GetAnswer() {
    int guess;
    cin >> guess;
    attempts++;

    if (guess == secretNumber) {
        cout << CORRECTGUESS << attempts << " attempts" << endl;
        return true; //Correct Typed Guess is equal to secret guess
    }
    else if (guess < secretNumber) {
        cout << LESSGUESS << endl;
        return false; //Correct Typed Guess is less than secret guess
    }
    else {
        cout << HIGHERGUESS << endl;
        return false;//Correct Typed Guess is higher than secret guess
    }
}

// Returns the number of attempts it took the user to guess the number
int GuessANumber::ShowResult() {
    return attempts;
}