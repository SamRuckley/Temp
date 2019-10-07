#include <iostream>
#include <string>
#include "Player.h"

Player* Player::instance = NULL;

bool Player::CreateInstance()
{
	bool exists = false;
	if (instance == NULL)
	{
		instance = new Player();
	}
	if (instance != NULL)
	{
		exists = true;
	}
	return exists;
}
Player* Player::GetInstance()
{
	return instance;
}
	Player::Player()
	{
	}
	Player::~Player()
	{
		initialised = false;
	}
	bool Player::IsInitialised()
	{
		return initialised;
	}
	bool Player::Initialise()
	{
		bool success = false;
		// Initialise anything needed here
		success = true;
		return success;
	}

	void Player::SetPlayerName(int AmountOfPlayers)
	{
		for (int i = 0; i != AmountOfPlayers; i++)
		{
			std::cout << "Enter player " << i+1 << std::endl;
			std::cin >> PlayerName[i];
		}
		std::cout << "Player 1: " << PlayerName[0] << std::endl;
		std::cout << "Player 2: " << PlayerName[1] << std::endl;
	}
	std::string Player::GetPlayerName(int i)
	{
		return PlayerName[(i - 1)];
	}


