#pragma once

#include "Employee.h"
#include <string>
class CLASSES_API Developer:public Employee
{
	std::string devLanguage;
	std::string uni;
public:
	std::string getPosition() const override;

	Developer(std::string firstName, std::string lastName, double salary, std::string devLanguage, std::string uni);
	~Developer();
	std::string getInfo() const override;
};

