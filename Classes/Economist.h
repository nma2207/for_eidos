#pragma once
#include "Employee.h"
class CLASSES_API Economist:public Employee
{
	int firmCount;
public:
	std::string getPosition() const override;

	Economist(std::string firstName, std::string lastName, double salary, int firmCount);
	~Economist();
	std::string getInfo() const override;
};

