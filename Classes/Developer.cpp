#include "Developer.h"



Developer::Developer(std::string name, double salary, std::string devLanguage, std::string uni):
	Employee(name, developer, salary),
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