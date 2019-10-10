#ifndef BATTLESHIPGAME_H
#define BATTLESHIPGAME_H

/////////////////////////////////////////////////////////////////////////
//	Includes
/////////////////////////////////////////////////////////////////////////
#include "Games.h"

//
//	@summary Battleship Game inherits from games.
//
class BattleshipGame : public Games
{
	/////////////////////////////////////////////////////////////////////////
	//	Public
	/////////////////////////////////////////////////////////////////////////
	public:

		/////////////////////////////////////////////////////////////////////////
		//	Variables
		/////////////////////////////////////////////////////////////////////////

		/////////////////////////////////////////////////////////////////////////
		//	Methods
		/////////////////////////////////////////////////////////////////////////

		//
		//	@summary	Constructor.
		//
		explicit BattleshipGame();

		//
		//	@summary	Destructor.
		//
		virtual ~BattleshipGame();

		//
		//	@summary	Checks if the class is initialised.
		//	@return		true if initialised; otherwise false.
		//
		bool IsInitialised();

		//
		//	@summary	Creates an instance of the game.
		//	@return		true if exists; otherwise false.
		//
		static bool CreateInstance();
		
		//
		//	@summary	Gets the instance of the battleship game.
		//	@return		The instance of the game; otherwise null.
		//
		static BattleshipGame* GetInstance();

		//
		//	@summary	Initialises the class.
		//	@return		true if successful; otherwise false.
		//
		bool Initialise();

		//
		//	@summary	Gets the name of the game.
		//	@return		The name of the game.
		//
		std::string GetName();

		//
		//	@summary	Gets the player game type.
		//	@return		The player game type for the game.
		//
		PlayerGameType GetPlayerGameType();

		//
		//	@summary	Gets the game menu.
		//
		void GameMenu();

		//
		//	@summary	Starts the player vs player.
		//
		void PlayerVSPlayerStart();

		//
		//	@summary	Starts the player vs computer.
		//
		void PlayerVSComputerStart();

	/////////////////////////////////////////////////////////////////////////
	//	Private
	/////////////////////////////////////////////////////////////////////////
	private:

		/////////////////////////////////////////////////////////////////////////
		//	Variables
		/////////////////////////////////////////////////////////////////////////

		//
		//	@summary	If the class is initialised.
		//
		bool initialised;

		//
		//	@summary	The instance of the battleship game.
		//
		static BattleshipGame* instance;

		//
		//	@summary	The name of the game.
		//
		const std::string Name = "Battleships";

		//
		//	@summary	The player name type.
		//
		const PlayerGameType PlayerGameType = PlayerGameType::TwoPlayer;

		//
		//	@summary	If the game is turn based.
		//
		const bool Turn = true;

		//
		//	@summary	The Menu Minimum.
		//
		const int MenuMin = 1;

		//
		//	@summary	The Menu Maximum.
		//
		const int MenuMax = 3;

		/////////////////////////////////////////////////////////////////////////
		//	Methods
		/////////////////////////////////////////////////////////////////////////
		
};
#endif // BATTLESHIPGAME_H

