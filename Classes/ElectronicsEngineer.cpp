#include "ElectronicsEngineer.h"


std::map<int, std::string> ElectronicsEngineer::ohmRules = {
	{0, "Ohm's law for subcircuit"},
	{1, "Ohm's lae for a complete chain"}
};
ElectronicsEngineer::ElectronicsEngineer(std::string name, double salary, std::vector<int> ohmRulesNums):
	Employee(name, electronic, salary),
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