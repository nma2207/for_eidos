#include"stdafx.h"
#include "Base.h"

#include "Assembler.h"
#include"CppDeveloper.h"
#include"Developer.h"
#include"Economist.h"
#include"ElectronicsEngineer.h"
#include<iostream>
#include<algorithm>
struct LessSalary
{
	bool operator()(Employee *a, Employee *b)
	{
		return a->getSalary() < b->getSalary();
	}
};
struct MoreSalary
{
	bool operator()(Employee *a, Employee *b)
	{
		return a->getSalary() > b->getSalary();
	}
};

Base::Base()
{
	employees.reserve(10);
	employees.push_back(new Assembler("Ruslan","A", 50000.1, workshop));
	employees.push_back(new CppDeveloper("Victor", "B", 100000.5, "KFU", 10, "VS2015"));
	employees.push_back(new Developer("Marat", "C", 25000, "Python 3.6", "KFU"));
	employees.push_back(new Economist("Sergei", "D", 35124.6, 3));
	employees.push_back(new ElectronicsEngineer("Bulat", "E", 45555.12, { 0,1 }));
	
	employees.push_back(new Assembler("Oleg", "F", 50400.1, warehouse));
	employees.push_back(new CppDeveloper("Dima", "G", 90000.5, "KAI", 7, "DEV-C++"));
	employees.push_back(new Developer("Ilya", "H", 55000, "Go", "MSU"));
	employees.push_back(new Economist("Albert", "I", 31124.6, 1));
	employees.push_back(new ElectronicsEngineer("Rinat", "K", 41255.12, { 0 }));

}


Base::~Base()
{
	for (int i = 0; i < employees.size(); i++)
		delete employees[i];
}
void Base::printInfoAboutAll() const
{
	for (Employee *emp : employees)
	{
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << emp->getInfo();

	}
}
void Base::printAllSalary() const
{
	for (Employee *emp : employees)
	{
		std::cout <<emp->getName()<<": "<< emp->getSalary() << std::endl;

	}
}

void Base::sortByIncreaseSalary()
{
	LessSalary ls;
	std::sort(employees.begin(), employees.end(), ls);
}
void Base::sortByReductionSalary()
{
	MoreSalary ms;
	std::sort(employees.begin(), employees.end(), ms);
}