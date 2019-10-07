#include <iostream>
#include <string>
#include "Player.h"
#include "BattleshipGame.h"
#include "UserInput.h"

Player* playerPointer = NULL;
BattleshipGame* battleshipPointer = NULL;

const int mainMenuOptionCount = 1; // Increase count to allow for the other games.
std::string MainMenuOptions[mainMenuOptionCount]; // Array for the amount of games.

///
/// @brief Fills the array with all of the games.
///
void InitialiseGames()
{
	MainMenuOptions[0] = "Battleships";
	// Ability to add other games.

	// Last option to always be exit.
	MainMenuOptions[mainMenuOptionCount] = "Exit";
}

///
/// @brief Fills the console with all of the game options.
///
void MainMenu()
{
	std::cout << "-------------------------------------------------" << std::endl;
	for (int i = 0; i <= mainMenuOptionCount; i++)
	{
		std::cout << i+1 << ". " << MainMenuOptions[i] << std::endl;
	}
	std::cout << "-------------------------------------------------" << std::endl;
}

///
/// @brief Clears the console.
///
void ClearConsole()
{
	system("cls");
}





int main() {

	//Singleton
	Player::CreateInstance();
	playerPointer = Player::GetInstance();
	playerPointer->Initialise();

	BattleshipGame::CreateInstance();
	battleshipPointer = BattleshipGame::GetInstance();
	battleshipPointer->Initialise();

	// Load in the game names
	InitialiseGames();

	std::string playernametest = "";
	std::cin >> playernametest;

	// Continually loop
	while (1)
	{
		MainMenu();
		int choice = 0;
		UserInput::GetIntegerChoice(1, 2, choice);
		int menuMin = 0;
		int menuMax = 0;
		bool keepPlaying = false;
		switch (choice)
		{
		case 1:
			// Battleships
			battleshipPointer->GameMenu(menuMin, menuMax);
			do
			{
				choice = 0;
				UserInput::GetIntegerChoice(menuMin, menuMax, choice);
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
		case mainMenuOptionCount+1:
			//Exit
			return 0;
			break;
		}
	}
	return 0;
}