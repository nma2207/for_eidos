#pragma once
#include "Employee.h"
#include <vector>
#include <map>
#include <string>
class CLASSES_API ElectronicsEngineer:public Employee
{
	std::vector<int> ohmRulesNumbers;
	static std::map <int, std::string> ohmRules;
	std::string getName() const override;
public:
	ElectronicsEngineer(std::string name, double salary, std::vector<int> ohmRulesNums);
	~ElectronicsEngineer();
	std::string getInfo() const override;
};

