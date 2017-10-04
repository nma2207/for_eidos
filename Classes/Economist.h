#pragma once
#include "Employee.h"
class Economist:public Employee
{
	int firmCount;
public:
	Economist(std::string name, double salary, int firmCount);
	~Economist();
	std::string getInfo() const override;
};

