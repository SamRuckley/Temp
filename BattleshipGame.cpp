/////////////////////////////////////////////////////////////////////////
//	Includes
/////////////////////////////////////////////////////////////////////////
#include "BattleshipGame.h"

/////////////////////////////////////////////////////////////////////////
//	Public
/////////////////////////////////////////////////////////////////////////

//
//	@summary	Constructor.
//
BattleshipGame::BattleshipGame()
{
}

//
//	@summary	Destructor.
//
BattleshipGame::~BattleshipGame()
{
	initialised = false;
}

//
//	@summary	Checks if it is initialised.
//	@return		true if initialised; otherwise false.
//
bool BattleshipGame::IsInitialised()
{
	return initialised;
}

//
//	@summary	Create the instance of the game.
//	@return		true if exists; otherwise false.
//
bool BattleshipGame::CreateInstance()
{
	bool exists = false;

	if (instance == NULL)
	{
		instance = new BattleshipGame();
	}

	if (instance != NULL)
	{
		exists = true;
	}

	return exists;
}

//
//	@summary	Gets the instance of the game.
//	@return		The instance of the game.
//
BattleshipGame* BattleshipGame::GetInstance()
{
	return instance;
}

//
//	@summary	Initialise the game.
//	@return		true if successful; otherwise false.
//
bool BattleshipGame::Initialise()
{
	bool success = false;

	// Default to true as a placeholder for the moment.
	success = true;

	return success;
}

//
//	@summary	Gets the name of the game.
//	@return		The name of the game.
//
std::string BattleshipGame::GetName()
{
	return Name;
}

//
//	@summary	Gets the player game type.
//	@return		The player game type.
//
Games::PlayerGameType BattleshipGame::GetPlayerGameType()
{
	return PlayerGameType;
}

//
//	@summary	Displays the game menu.
//
void BattleshipGame::GameMenu()
{
	std::cout << "1.\tPlayer vs Player." << std::endl;
	std::cout << "2.\tPlayer vc Computer." << std::endl;
	std::cout << "3.\tReturn to main menu" << std::endl;
	std::cout << std::endl;
}

//
//	@summary	Starts a player vs player game.
//
void BattleshipGame::PlayerVSPlayerStart()
{
	std::cout << "Testing player" << std::endl;
}

//
//	@summary	Starts a player vs computer game.
//
void BattleshipGame::PlayerVSComputerStart()
{
	std::cout << "Testing computer" << std::endl;
}