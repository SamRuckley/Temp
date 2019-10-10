#ifndef PLAYERS_H
#define PLAYERS_H

//
//	@summary	Contains the information for the Players
//
class Players
{
	/////////////////////////////////////////////////////////////////////////
	//	Public
	/////////////////////////////////////////////////////////////////////////

	public:
		/////////////////////////////////////////////////////////////////////////
		//	Variables
		/////////////////////////////////////////////////////////////////////////

		//
		//	@summary	The maximum amount of players allowed.
		//
		static const int MaximumPlayerCount = 2;

		/////////////////////////////////////////////////////////////////////////
		//	Methods
		/////////////////////////////////////////////////////////////////////////
		
		//
		//	@summary	Constructor
		//
		explicit Players();

		//
		//	@summary	Initialises the player class.
		//	@return		true if initialised; otherwise false.
		//
		bool Initialise();

		//
		//	@summary	Gets if the player class has been initialised.
		//	@return		true if initialised; otherwise false.
		//
		bool IsInitialised();

		//
		//	@summary	Creates an instance of the player class.
		//	@return		true if successful; otherwise false.
		//
		static bool CreateInstance();

		//
		//	@summary	Gets an instance of the player class.
		//	@return		An instance of the player class; otherwise null.
		//
		static Players* GetInstance();
	
		//
		//	@summary	Sets the player name.
		//	@param		amountOfPlayers		The amount of players.
		//
		void SetPlayerNames(int amountOfPlayers);

		//
		//	@summary	Gets the player name at the specified index.
		//	@param		i		The index of the player name.
		//	@return		The player name as a string.
		//
		std::string GetPlayerName(int i);
	
	/////////////////////////////////////////////////////////////////////////
	//	Private
	/////////////////////////////////////////////////////////////////////////

	private:
		/////////////////////////////////////////////////////////////////////////
		//	Variables
		/////////////////////////////////////////////////////////////////////////

		//
		//	@summary	If the class has been initialised.
		//
		bool initialised;

		//
		//	@summary	The instance of the player class.
		//
		static Players* instance;

		//
		//	@summary	Contains the player names.
		//
		std::string PlayerName[MaximumPlayerCount];
		
		/////////////////////////////////////////////////////////////////////////
		//	Methods
		/////////////////////////////////////////////////////////////////////////
		
		//
		//	@summary	Destructor
		//
		virtual ~Players();
};
#endif // PLAYERS_H
