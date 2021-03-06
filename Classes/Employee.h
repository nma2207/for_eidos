#pragma once
#include "Classes.h"
#include<string>
#include<map>

enum CLASSES_API Position {
	assembler = 0,
	electronic = 1,
	developer = 2,
	economist = 3
};

class CLASSES_API Employee
{
	std::string firstName;
	std::string lastName;
	Position position;
	double salary;
public:
	virtual std::string getPosition() const = 0;
	std::string getName() const;

	Employee(std::string firstName, std::string lastName, Position position, double salary);
	virtual std::string getInfo() const;
	double getSalary() const;
	virtual ~Employee();
};
