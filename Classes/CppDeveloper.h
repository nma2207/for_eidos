#pragma once

#include "Developer.h"
#include<string>
class CLASSES_API CppDeveloper: public Developer
{
	double experience;
	std::string ide;
public:
	CppDeveloper(std::string name, double salary,std::string uni, double experience, std::string ide);
	~CppDeveloper();
	std::string getInfo() const override;
};

