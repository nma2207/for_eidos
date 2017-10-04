#pragma once

#include<string>
#include<map>
enum Position {
	assembler = 0,
	electronic = 1,
	developer = 2,
	economist = 3
};

class Employee
{
	std::string name;
	Position position;
	double salary;
	static std::map<Position, std::string> posToString;

public:
	Employee(std::string name, Position position, double salary);
	virtual std::string getInfo() const;
	double getSalary() const;
	virtual ~Employee();
};
