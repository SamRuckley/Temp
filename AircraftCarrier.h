#ifndef AIRCRAFTCARRIER_H
#define AIRCRAFTCARRIER_H
#include "Ships.h"
class AircraftCarrier :	public Ships
{
public:
	AircraftCarrier();
	virtual ~AircraftCarrier();

	std::string GetName();
	int GetLength();

private:
	std::string name;
	int length;
};
#endif // AIRCRAFTCARRIER_H
