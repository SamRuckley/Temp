/////////////////////////////////////////////////////////////////////////
//	Includes
/////////////////////////////////////////////////////////////////////////
#include "Destroyer.h"

//
//	@summary	Constructor.
//
Destroyer::Destroyer()
{
}

//
//	@summary	Destructor.
//
Destroyer::~Destroyer()
{
}

//
//	@summary	Gets the name of the ship.
//	@return		The name of the ship.
//
std::string Destroyer::GetName()
{
	return name;
}

//
//	@summary	Gets the length of the ship.
//	@return		The length of the ship.
//
int Destroyer::GetLength()
{
	return length;
}