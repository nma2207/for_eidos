#include "stdafx.h"
#include "Employee.h"


Employee::Employee(std::string firstName, std::string lastName, Position pos, double salary):
	firstName(firstName),
	lastName(lastName),
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
	info += ("First name: " + firstName+"\n");
	info += ("Last name: " + lastName + "\n");
	info += ("Position: " + getPosition() + "\n");
	info += ("Salary: " + std::to_string(salary) + "\n");
	return info;
}

double Employee::getSalary() const
{
	return salary;
}
std::string Employee::getName() const
{
	return firstName+" "+lastName;
}
