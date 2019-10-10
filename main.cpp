/////////////////////////////////////////////////////////////////////////
//	Includes
/////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

#include "Players.h"
#include "BattleshipGame.h"
#include "UserInput.h"


const int MainMenuOptionCount = 1; // Increase count to allow for the other games.
std::string MainMenuOptions[MainMenuOptionCount]; // Array for the amount of games.

///
/// @summary	Fills the array with all of the games.
///
void InitialiseGames()
{
	MainMenuOptions[0] = "Battleships";
	// Ability to add other games.

	// Last option to always be exit.
	MainMenuOptions[MainMenuOptionCount] = "Exit";
}

///
/// @summary	Fills the console with all of the game options.
///
void MainMenu()
{
	std::cout << "-------------------------------------------------" << std::endl;
	for (int i = 0; i <= MainMenuOptionCount; i++)
	{
		std::cout << i+1 << ". " << MainMenuOptions[i] << std::endl;
	}
	std::cout << "-------------------------------------------------" << std::endl;
}

///
/// @summary	Clears the console.
///
void ClearConsole()
{
	system("cls");
}

//
//	@summary	Main.
//	@return		An error code.
//
int main() 
{
	bool success = false;

	Players* playerPointer = NULL;
	BattleshipGame* battleshipPointer = NULL;

	Players::CreateInstance();
	playerPointer = Players::GetInstance();

	if (playerPointer != NULL)
	{
		success = true;
	}

	if (success)
	{
		success = playerPointer->Initialise();
	}
	
	if (success)
	{
		BattleshipGame::CreateInstance();
		battleshipPointer = BattleshipGame::GetInstance();
		success = (battleshipPointer != NULL);
	}
	
	if (success)
	{
		success = battleshipPointer->Initialise();
	}

	if (success)
	{
		return -1;
	}

	// Load in the game names
	InitialiseGames();

	// Continually loop
	while (1)
	{
		MainMenu();
		int choice = 0;
		// Always a minimum of 1 choice, the choice for exit.
		UserInput::GetIntegerChoice(1, MainMenuOptionCount + 1, choice);
		int menuMin = 0;
		int menuMax = 0;
		bool keepPlaying = false;
		switch (choice)
		{
		case 1:
			// Battleships
			battleshipPointer->GameMenu();
			do
			{
				choice = 0;

				if (!UserInput::GetIntegerChoice(menuMin, menuMax, choice))
				{
					break;
				}

				switch (choice)
				{
				case 1:
					keepPlaying = true;
					battleshipPointer->PlayerVSPlayerStart();
					break;
				case 2:
					keepPlaying = true;
					battleshipPointer->PlayerVSComputerStart();
					break;
				case 3:
					// return to main menu
					keepPlaying = false;
					break;
				}
			} while (keepPlaying == true);
			break;
		case MainMenuOptionCount+1:
			//Exit
			return 0;
		}
	}
	return -1;
}