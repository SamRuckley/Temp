/////////////////////////////////////////////////////////////////////////
//	Includes
/////////////////////////////////////////////////////////////////////////
#include "Battleship.h"

//
//	@summary	Constructor.
//
Battleship::Battleship()
{
}

//
//	@summary	Destructor.
//
Battleship::~Battleship()
{
}

//
//	@summary	Gets the name of the ship.
//	@return		The name of the ship.
//
std::string Battleship::GetName()
{
	return name;
}

//
//	@summary	Gets the length of the ship.
//	@return		The length of the ship.
//
int Battleship::GetLength()
{
	return length;
}
