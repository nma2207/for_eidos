#ifdef BASE_EXPORTS
#define BASE_API __declspec(dllexport)
#else
#define BASE_API __declspec(dllimport)
#endif

#include"Employee.h"
#include <vector>

class BASE_API Base
{
	std::vector<Employee*> employees;
public:
	Base();
	~Base();
	void printInfoAboutAll() const;
	void printAllSalary() const;
	void sortByIncreaseSalary();
	void sortByReductionSalary();
};

