#include "AircraftCarrier.h"


AircraftCarrier::AircraftCarrier()
{
	name = "Aircraft Carrier";
	length = 5;
}


AircraftCarrier::~AircraftCarrier()
{
}

std::string AircraftCarrier::GetName()
{
	return name;
}

int AircraftCarrier::GetLength()
{
	return length;
}