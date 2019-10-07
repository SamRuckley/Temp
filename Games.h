#ifndef GAMES_H
#define GAMES_H

#include <iostream>
#include <string>
#include "UserInput.h"

class Games
{
public:
	Games();
	virtual ~Games();

	enum PlayerGameType
	{
		SinglePlayer,
		TwoPlayer
	};

	std::string name;
	int menuMin;
	int menuMax;

	virtual std::string GetName() = 0;
	virtual PlayerGameType GetPlayerGameType() = 0;
	virtual void GameMenu(int& menuMin, int& menuMax) = 0;
};
#endif // GAMES_H 
