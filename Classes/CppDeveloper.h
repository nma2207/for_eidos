#pragma once

#include "Developer.h"
#include<string>
class CLASSES_API CppDeveloper: public Developer
{
	double experience;
	std::string ide;
public:
	CppDeveloper(std::string firstName, std::string lastName, double salary,std::string uni, double experience, std::string ide);
	~CppDeveloper();
	std::string getInfo() const override;
};

