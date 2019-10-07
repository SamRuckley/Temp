#include "Destroyer.h"

Destroyer::Destroyer()
{
	name = "Destroyer";
	length = 3;
}

Destroyer::~Destroyer()
{
}

std::string Destroyer::GetName()
{
	return name;
}

int Destroyer::GetLength()
{
	return length;
}