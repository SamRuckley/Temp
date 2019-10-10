/////////////////////////////////////////////////////////////////////////
//	Includes
/////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

#include "Players.h"

//
//	@summary	Creates an instance of the player class.
//	@return		true if successful; otherwise false.
//
bool Players::CreateInstance()
{
	bool exists = false;

	if (instance == NULL)
	{
		instance = new Players();
	}

	if (instance != NULL)
	{
		exists = true;
	}

	return exists;
}

//
//	@summary	Gets an instance of the player class.
//	@return		An instance of the player class; otherwise null.
//
Players* Players::GetInstance()
{
	return instance;
}

//
//	@summary	Constructor
//
Players::Players()
{
}

//
//	@summary	Destructor
//
Players::~Players()
{
	initialised = false;
}

//
//	@summary	Gets if the player class has been initialised.
//	@return		true if initialised; otherwise false.
//
bool Players::IsInitialised()
{
	return initialised;
}

//
//	@summary	Initialises the player class.
//	@return		true if initialised; otherwise false.
//
bool Players::Initialise()
{
	bool success = false;

	// Initialise anything needed here
	success = true;

	return success;
}

//
//	@summary	Sets the player name.
//	@param		amountOfPlayers		The amount of players.
//
void Players::SetPlayerNames(int amountOfPlayers)
{
	for (int i = 0; i != amountOfPlayers; i++)
	{
		std::cout << "Enter player " << i+1 << std::endl;
		std::cin >> PlayerName[i];
	}

	for (int i = 0; i < amountOfPlayers; i++)
	{
		std::cout << "Player " << i << ": " << PlayerName[i] << std::endl;
	}
}

//
//	@summary	Gets the player name at the specified index.
//	@param		i		The index of the player name.
//	@return		The player name as a string.
//
std::string Players::GetPlayerName(int i)
{
	return PlayerName[(i - 1)];
}


