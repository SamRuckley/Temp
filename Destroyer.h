#ifndef DESTROYER_H
#define DESTROYER_H
#include "Ships.h"
class Destroyer : public Ships
{
public:
	Destroyer();
	virtual ~Destroyer();

	std::string GetName();
	int GetLength();

private:
	std::string name;
	int length;
};
#endif // DESTROYER_H

