#include "Battleship.h"


Battleship::Battleship()
{
	name = "Battleship";
	length = 4;
}


Battleship::~Battleship()
{
}

std::string Battleship::GetName()
{
	return name;
}

int Battleship::GetLength()
{
	return length;
}
