/////////////////////////////////////////////////////////////////////////
//	Includes
/////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

#include "UserInput.h"

//
//	@summary	Gets the integer choice from the user.
//	@param		min		The minimum value.
//	@param		max		The maximum value.
//	@param		choice	The users choice.
//	@return		true if successful; otherwise false.
//
bool UserInput::GetIntegerChoice(int min, int max, int &choice)
{
	bool success = false;

	if (choice != NULL)
	{
		success = true;
	}

	if (success)
	{
		success = ((min < 0) && (min < max));
	}

	if (success)
	{
		choice = 0; // Empty choice for new input.
		do
		{
			std::cout << "Enter choice: ";
			std::cin >> choice;
			std::cout << std::endl;
		} while ((choice < min) || (choice > max));
	}
	
	return success;
}

//
//	@summary	Gets string only input.
//	@param		input	The input to be checked.
//
void UserInput::GetStringOnlyInput(std::string &input)
{
	std::cin >> input;
	// regex match needed

	// if match = true then stop looping
}

//
//	@summary	Gets integer only input.
//	@param		input	The input to be checked.
//
void UserInput::GetIntegerOnlyInput(int &input)
{
	std::cin >> input;
	// regex match needed

	// if match = true then stop looping
}
