#ifndef PLAYER_H
#define PLAYER_H
class Player
{
public:
	explicit Player();
	virtual ~Player();
	bool IsInitialised();
	static bool CreateInstance();
	static Player* instance;
	static Player* GetInstance();
	
	std::string PlayerName[2];

	bool Initialise();
	void SetPlayerName(int AmountOfPlayers);
	std::string GetPlayerName(int i);
private:
	bool initialised;
};
#endif // PLAYER_H
