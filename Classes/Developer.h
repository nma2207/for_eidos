#pragma once
#include "Employee.h"
#include <string>
class Developer:public Employee
{
	std::string devLanguage;
	std::string uni;
public:
	Developer(std::string name, double salary, std::string devLanguage, std::string uni);
	~Developer();
	std::string getInfo() const override;
};

