#include "stdafx.h"
#include "Economist.h"



Economist::Economist(std::string firstName, std::string lastName, double salary, int firmCount):
	Employee(firstName, lastName, economist, salary),
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
std::string Economist::getPosition() const
{
	return "Economist";
}