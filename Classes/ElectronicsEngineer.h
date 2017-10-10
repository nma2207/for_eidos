#pragma once
#include "Employee.h"
#include <vector>
#include <map>
#include <string>
class CLASSES_API ElectronicsEngineer:public Employee
{
	std::vector<int> ohmRulesNumbers;
	static std::map <int, std::string> ohmRules;
public:
	std::string getPosition() const override;

	ElectronicsEngineer(std::string firstName, std::string lastName, double salary, std::vector<int> ohmRulesNums);
	~ElectronicsEngineer();
	std::string getInfo() const override;
};

