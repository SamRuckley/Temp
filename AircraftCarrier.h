#ifndef AIRCRAFTCARRIER_H
#define AIRCRAFTCARRIER_H

/////////////////////////////////////////////////////////////////////////
//	Includes
/////////////////////////////////////////////////////////////////////////
#include "Ships.h"

//
//	@summary	Aircraft Carrier, inherits from Ships.
//
class AircraftCarrier :	public Ships
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
		//	@summary	Constructor
		//
		explicit AircraftCarrier();

		//
		//	@summary	Get the name of the ship.
		//	@return		The name of the ship.
		//
		std::string GetName();

		//
		//	@summary	Get the length of the ship.
		//	@return		The length of the ship.
		//
		int GetLength();

	/////////////////////////////////////////////////////////////////////////
	//	Private
	/////////////////////////////////////////////////////////////////////////
	private:

		/////////////////////////////////////////////////////////////////////////
		//	Variables
		/////////////////////////////////////////////////////////////////////////
		
		//
		//	@summary	The name of the ship.
		//
		const std::string name = "Aircraft Carrier";

		//
		//	@summary	The length of the ship.
		//
		const int length = 5;

		/////////////////////////////////////////////////////////////////////////
		//	Methods
		/////////////////////////////////////////////////////////////////////////
		
		//
		//	@summary	Destructor
		//
		virtual ~AircraftCarrier();

};
#endif // AIRCRAFTCARRIER_H
