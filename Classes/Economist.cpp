#include "Economist.h"



Economist::Economist(std::string name, double salary, int firmCount):
	Employee(name, economist, salary),
	firmCount(firmCount)
{
}


Economist::~Economist()
{
}

std::string Economist::getInfo() const
{
	std::string info = Employee::getInfo();
	info += ("Firm count: " + std::to_string(firmCount)+"\n");
	return info;
}