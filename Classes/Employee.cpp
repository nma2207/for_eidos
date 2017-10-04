#include "Employee.h"

std::map<Position, std::string> Employee::posToString = {
	{ assembler, "Assembler" },
	{ electronic, "Electronic engineer" },
	{ developer, "Developer" },
	{ economist, "Economist" }
};

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
	info += ("Position: " + posToString[position] + "\n");
	info += ("Salary: " + std::to_string(salary) + "\n");
	return info;
}

double Employee::getSalary() const
{
	return salary;
}

