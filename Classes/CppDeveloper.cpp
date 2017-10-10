#include "stdafx.h"
#include "CppDeveloper.h"



CppDeveloper::CppDeveloper(std::string firstName, std::string lastName, double salary, std::string uni,double experience, std::string ide):
	Developer(firstName,lastName, salary, "C++",uni),
	experience(experience),
	ide(ide)
{
}


CppDeveloper::~CppDeveloper()
{
}
std::string CppDeveloper::getInfo() const
{
	std::string info = Developer::getInfo();
	info += ("Experience: " + std::to_string(experience) + "\n");
	info += ("IDE: " + ide + "\n");
	return info;
}