#pragma once

#include "Employee.h"
#include <string>
class CLASSES_API Developer:public Employee
{
	std::string devLanguage;
	std::string uni;
	std::string getName() const override;
public:
	Developer(std::string name, double salary, std::string devLanguage, std::string uni);
	~Developer();
	std::string getInfo() const override;
};

