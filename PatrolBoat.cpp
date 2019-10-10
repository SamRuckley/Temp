/////////////////////////////////////////////////////////////////////////
//	Includes
/////////////////////////////////////////////////////////////////////////
#include "PatrolBoat.h"

//
//	@summary	Constructor.
//
PatrolBoat::PatrolBoat()
{
}

//
//	@summary	Destructor.
//
PatrolBoat::~PatrolBoat()
{
}

//
//	@summary	Gets the name of the ship.
//	@return		The name of the ship.
//
std::string PatrolBoat::GetName()
{
	return name;
}

//
//	@summary	Gets the length of the ship.
//	@return		The length of the ship.
//
int PatrolBoat::GetLength()
{
	return length;
}
