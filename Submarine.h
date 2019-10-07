#ifndef SUBMARINE_H
#define SUBMARINE_H
#include "Ships.h"
class Submarine :
	public Ships
{
public:
	Submarine();
	virtual ~Submarine();

	std::string GetName();
	int GetLength();

private:
	std::string name;
	int length;
};
#endif // SUBMARINE_H
