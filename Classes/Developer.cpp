#include "stdafx.h"
#include "Developer.h"



Developer::Developer(std::string firstName, std::string lastName, double salary, std::string devLanguage, std::string uni):
	Employee(firstName,lastName, developer, salary),
	devLanguage(devLanguage),
	uni(uni)
{
}


Developer::~Developer()
{
}
std::string Developer::getInfo() const
{
	std::string info = Employee::getInfo();
	info += ("Development language: " + devLanguage+"\n");
	info += ("University: " + uni + "\n");

	return info;
}
std::string Developer::getPosition() const
{
	return "Developer";
}