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
	employees.push_back(new Assembler("Ruslan", 50000.1, workshop));
	employees.push_back(new CppDeveloper("Victor", 100000.5, "KFU", 10, "VS2015"));
	employees.push_back(new Developer("Marat", 25000, "Python 3.6", "KFU"));
	employees.push_back(new Economist("Sergei", 35124.6, 3));
	employees.push_back(new ElectronicsEngineer("Bulat", 45555.12, { 0,1 }));
	
	employees.push_back(new Assembler("Oleg", 50400.1, warehouse));
	employees.push_back(new CppDeveloper("Dima", 90000.5, "KAI", 7, "DEV-C++"));
	employees.push_back(new Developer("Ilya", 55000, "Go", "MSU"));
	employees.push_back(new Economist("Albert", 31124.6, 1));
	employees.push_back(new ElectronicsEngineer("Rinat", 41255.12, { 0 }));

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
		std::cout << emp->getSalary() << " ";

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