#include "stdafx.h"
#include "Assembler.h"


std::map<Departament, std::string> Assembler::departamentToString = {
	{workshop, "Workshop"},
	{warehouse, "Warehouse"}
};
Assembler::Assembler(std::string firstName, std::string lastName, double salary, Departament dep):
	Employee(firstName,lastName, assembler, salary),
	departament(dep)
{

}


Assembler::~Assembler()
{
}

std::string Assembler::getInfo() const
{
	std::string info = Employee::getInfo();
	info += ("Departament: " + departamentToString[departament]+"\n");
	return info;
}

std::string Assembler::getPosition() const
{
	return "Assembler";
}