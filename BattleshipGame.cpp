#include "BattleshipGame.h"

BattleshipGame* BattleshipGame::instance = NULL;

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
BattleshipGame* BattleshipGame::GetInstance()
{
	return instance;
}

BattleshipGame::BattleshipGame()
{
	name = "Battleships";
	playerGameType = PlayerGameType::TwoPlayer;
	turn = true;
	menuMin = 1;
	menuMax = 3;
}


BattleshipGame::~BattleshipGame()
{
	initialised = false;
}

bool BattleshipGame::IsInitialised()
{
	return initialised;
}
bool BattleshipGame::Initialise()
{
	bool success = false;
	success = true;
	return success;
}

std::string BattleshipGame::GetName()
{
	return name;
}

Games::PlayerGameType BattleshipGame::GetPlayerGameType()
{
	return playerGameType;
}

void BattleshipGame::GameMenu(int& min, int& max)
{
	std::cout << "1.\tPlayer vs Player." << std::endl;
	std::cout << "2.\tPlayer vc Computer." << std::endl;
	std::cout << "3.\tReturn to main menu" << std::endl;
	std::cout << std::endl;
	min = menuMin;
	max = menuMax;
}

void BattleshipGame::PlayerVSPlayerStart()
{
	std::cout << "Testing player" << std::endl;
}

void BattleshipGame::PlayerVSComputerStart()
{
	std::cout << "Testing computer" << std::endl;
}