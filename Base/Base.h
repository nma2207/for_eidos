#pragma once

#include"Employee.h"
#include <vector>
class Base
{
	std::vector<Employee*> employees;
public:
	Base();
	~Base();
	void printInfoAboutAll() const;
	void printAllSalary() const;
	void sortByIncreaseSalary();
	void sortByReductionSalary();
};

