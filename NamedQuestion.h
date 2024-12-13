#pragma once
#include <iostream>
class NamedQuestion {
public:
	virtual void init() = 0;
	virtual void ShowQuestion() = 0;
	virtual bool GetAnswer() = 0;
	virtual int ShowResult() = 0;

};