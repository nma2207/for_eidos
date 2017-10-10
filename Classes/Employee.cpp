#include "stdafx.h"
#include "Employee.h"


Employee::Employee(std::string name, Position pos, double salary):
	name(name),
	position(pos),
	salary(salary)
{
}


Employee::~Employee()
{
}

std::string Employee::getInfo() const
{
	std::string info = "";
	info += ("Name: " + name+"\n");
	info += ("Position: " + getName() + "\n");
	info += ("Salary: " + std::to_string(salary) + "\n");
	return info;
}

double Employee::getSalary() const
{
	return salary;
}

