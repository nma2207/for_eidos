#include "stdafx.h"
#include "ElectronicsEngineer.h"


std::map<int, std::string> ElectronicsEngineer::ohmRules = {
	{0, "Ohm's law for subcircuit"},
	{1, "Ohm's lae for a complete chain"}
};
ElectronicsEngineer::ElectronicsEngineer(std::string firstName, std::string lastName, double salary, std::vector<int> ohmRulesNums):
	Employee(firstName, lastName, electronic, salary),
	ohmRulesNumbers(ohmRulesNums)
{
}


ElectronicsEngineer::~ElectronicsEngineer()
{
}
std::string ElectronicsEngineer::getInfo() const
{
	std::string info = Employee::getInfo();
	info += "Ohm rules: ";
	for(int num: ohmRulesNumbers)
	{
		info += (ohmRules[num] + ", ");
	}
	info += "\n";
	return info;
}

std::string ElectronicsEngineer::getPosition() const
{
	return "Electronics Engineer";
}