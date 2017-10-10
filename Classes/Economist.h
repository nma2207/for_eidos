#pragma once
#include "Employee.h"
class CLASSES_API Economist:public Employee
{
	int firmCount;
	std::string getName() const override;
public:
	Economist(std::string name, double salary, int firmCount);
	~Economist();
	std::string getInfo() const override;
};

