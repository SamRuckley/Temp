#ifndef BATTLESHIPGAME_H
#define BATTLESHIPGAME_H
#include "Games.h"
class BattleshipGame : public Games
{
public:

	

	explicit BattleshipGame();
	virtual ~BattleshipGame();
	bool IsInitialised();
	static bool CreateInstance();
	static BattleshipGame* instance;
	static BattleshipGame* GetInstance();

	bool Initialise();

	std::string name;
	PlayerGameType playerGameType;
	bool turn;
	int menuMin;
	int menuMax;

	std::string GetName();
	PlayerGameType GetPlayerGameType();
	void GameMenu(int& menuMin, int& menuMax);
	void PlayerVSPlayerStart();
	void PlayerVSComputerStart();

private:
	bool initialised;
};
#endif // BATTLESHIPGAME_H

