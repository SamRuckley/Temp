/////////////////////////////////////////////////////////////////////////
//	Includes
/////////////////////////////////////////////////////////////////////////
#include "AircraftCarrier.h"

//
//	@summary	Constructor.
//
AircraftCarrier::AircraftCarrier()
{
}

//
//	@summary	Destructor.
//
AircraftCarrier::~AircraftCarrier()
{
}

//
//	@summary	Gets the name of the ship.
//	@return		The name of the ship.
//
std::string AircraftCarrier::GetName()
{
	return name;
}

//
//	@summary	Gets the length of the ship.
//	@return		The length of the ship.
//
int AircraftCarrier::GetLength()
{
	return length;
}