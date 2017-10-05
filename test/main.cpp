#include<iostream>
#include"Base.h"
int main()
{
	Base b;
	char c;
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
		}
		else if (c == '-')
		{
			b.sortByReductionSalary();
		}

		
	}

	return 0;
}