#include "Submarine.h"


Submarine::Submarine()
{
	name = "Submarine";
	length = 2;
}


Submarine::~Submarine()
{
}

std::string Submarine::GetName()
{
	return name;
}

int Submarine::GetLength()
{
	return length;
}

