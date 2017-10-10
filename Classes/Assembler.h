#pragma once

#include "Employee.h"
#include <string>
#include <map>
enum CLASSES_API Departament {
	workshop = 0,
	warehouse = 1
};
class  CLASSES_API Assembler:public Employee
{
	Departament departament;
	static std::map <Departament, std::string> departamentToString;
	std::string getName() const override;
public:
	Assembler(std::string name, double salary, Departament dep);
	~Assembler();
	std::string getInfo() const override;
};

