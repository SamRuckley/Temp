#ifndef BATTLESHIP_H
#define BATTLESHIP_H
#include "Ships.h"
class Battleship : public Ships
{
public:
	Battleship();
	virtual ~Battleship();

	std::string GetName();
	int GetLength();

private:
	std::string name;
	int length;
};
#endif // BATTLESHIP_H

