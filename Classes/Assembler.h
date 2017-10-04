#pragma once
#include "Employee.h"
#include <string>
#include <map>
enum Departament {
	workshop = 0,
	warehouse = 1
};
class Assembler:public Employee
{
	Departament departament;
	static std::map <Departament, std::string> departamentToString;
public:
	Assembler(std::string name, double salary, Departament dep);
	~Assembler();
	std::string getInfo() const override;
};

