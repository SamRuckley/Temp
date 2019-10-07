#include "UserInput.h"
#include <iostream>
#include <string>


UserInput::UserInput()
{
}


UserInput::~UserInput()
{
}

bool UserInput::GetIntegerChoice(int min, int max, int &choice)
{
	bool success = false;
	// Check that the parameters are correct
	if (min < max)
	{
		choice = 0; // Empty choice for new input.
		do
		{
			std::cout << "Enter choice: ";
			std::cin >> choice;
			std::cout << std::endl;
		} while ((choice < min) || (choice > max));
		success = true;
	}	
	return success;
}

void UserInput::GetStringOnlyInput(std::string &input)
{
	std::cin >> input;
	// regex match needed

	// if match = true then stop looping
}

void UserInput::GetIntegerOnlyInput(int &input)
{
	std::cin >> input;
	// regex match needed

	// if match = true then stop looping
}
