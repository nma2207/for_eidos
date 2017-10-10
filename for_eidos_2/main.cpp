#include<iostream>
#include"Base.h"
int main()
{
	Base b;
	char c;
	std::cout << "Enter a letter to show all employees" << std::endl;
	std::cout << "Enter a digit to show all salaries" << std::endl;
	std::cout << "Enter \"+\" to sort by increase salary" << std::endl;
	std::cout << "Enter \"-\" to sort by reduction salary" << std::endl;
	std::cout << "Enter \";\" to exit" << std::endl;
	//добавил свою команду для выхода из цикла
	while ((c = getchar()) != ';')
	{
		
		if ('0' <= c && c <= '9')
		{
			b.printAllSalary();
			std::cout << std::endl;
		}
		else if (('a' <= c && c <= 'z')
			|| ('A' <= c && c <= 'Z'))
		{
			b.printInfoAboutAll();
		}
		else if (c == '+')
		{
			b.sortByIncreaseSalary();
			std::cout << "List sorted by increase salary" << std::endl;
		}
		else if (c == '-')
		{
			b.sortByReductionSalary();
			std::cout << "List sorted by reduction salary" << std::endl;
		}

		
	}

	return 0;
}