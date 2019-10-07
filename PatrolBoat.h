#ifndef PATROLBOAT_H
#define PATROLBOAT_H
#include "Ships.h"
class PatrolBoat :
	public Ships
{
public:
	PatrolBoat();
	virtual ~PatrolBoat();

	std::string GetName();
	int GetLength();

private:
	std::string name;
	int length;
};
#endif // PATROLBOAT_H

