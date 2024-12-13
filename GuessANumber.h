#pragma once
#include "NamedQuestion.h"
class GuessANumber: public NamedQuestion
{
    private:
        int secretNumber; 
        int attempts;      
public:
        void init();
        void ShowQuestion();
        bool GetAnswer();
        int ShowResult();
    };