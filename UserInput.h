#ifndef USERINPUT_H
#define USERINPUT_H

#include <iostream>
#include <string>

class UserInput
{
public:
	UserInput();
	virtual ~UserInput();
	
	static bool GetIntegerChoice(int min, int max, int &choice);
	static void GetStringOnlyInput(std::string &input);
	static void GetIntegerOnlyInput(int &input);
};
#endif // USERINPUT_H

