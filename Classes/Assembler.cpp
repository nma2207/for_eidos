#include "Assembler.h"


std::map<Departament, std::string> Assembler::departamentToString = {
	{workshop, "Workshop"},
	{warehouse, "Warehouse"}
};
Assembler::Assembler(std::string name, double salary, Departament dep):
	Employee(name, assembler, salary),
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