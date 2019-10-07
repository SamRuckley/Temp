#ifndef SHIPS_H
#define SHIPS_H

#include <iostream>
#include <string>

class Ships
{
public:
	Ships();
	virtual ~Ships();
	int shipLength;
	std::string shipName;

	virtual std::string GetName() = 0;
	virtual int GetLength() = 0;
};
#endif // SHIPS_H

