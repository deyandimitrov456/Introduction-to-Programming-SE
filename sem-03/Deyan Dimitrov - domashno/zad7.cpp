#include <iostream>

int main()
{
	int number;
	std::cin >> number;
	if (number <= 0)
	{
		std::cout << "Number must be positive!" << std::endl;
		return 0;
	}
	int dots, spaces,centre;
	if (number % 2 == 0)
	{
		dots = number;
		spaces = number / 2;
		centre = number / 2;
		for (int i = 1;i <= number;i++)
		{
			if (i == 1 || i == number)
			{
				for (int j = 1;j <= dots;j++)
				{
					std::cout << ". ";
				}
				for (int j = 1;j <= spaces;j++)
				{
					std::cout << "  ";
				}
				for (int j = 1;j <= dots;j++)
				{
					std::cout << ". ";
				}
			}
			else if (i == centre||i==centre+1)
			{
				std::cout << ". ";
				for (int j = 1;j <= spaces+1;j++)
				{
					std::cout << "  ";
				}
				for (int j = 1;j <= dots-1;j++)
				{
					std::cout << ". ";
				}
				for (int j = 1;j <= spaces+1;j++)
				{
					std::cout << "  ";
				}
				std::cout << ". ";
			}
			else
			{
				std::cout << ". ";
				for (int j = 1;j <= spaces+1;j++)
				{
					std::cout << "  ";
				}
				std::cout << ". ";
				for (int j = 1;j <= spaces;j++)
				{
					std::cout << "  ";
				}
				std::cout << ". ";
				for (int j = 1;j <= spaces+1;j++)
				{
					std::cout << "  ";
				}
				std::cout << ".";
			}
			std::cout << std::endl;
		}
	}
	else
	{
		dots = number;
		spaces = number / 2+1;
		centre = number / 2+1;
		for (int i = 1;i <= number;i++)
		{
			if (i == 1 || i == number)
			{
				for (int j = 1;j <= dots;j++)
				{
					std::cout << ". ";
				}
				for (int j = 1;j <= spaces;j++)
				{
					std::cout << "  ";
				}
				for (int j = 1;j <= dots;j++)
				{
					std::cout << ". ";
				}
			}
			else if (i == centre)
			{
				std::cout << ". ";
				for (int j = 1;j <= spaces;j++)
				{
					std::cout << "  ";
				}
				for (int j = 1;j <= dots;j++)
				{
					std::cout << ". ";
				}
				for (int j = 1;j <= spaces;j++)
				{
					std::cout << "  ";
				}
				std::cout << ". ";
			}
			else
			{
				std::cout << ". ";
				for (int j = 1;j <= spaces;j++)
				{
					std::cout << "  ";
				}
				std::cout << ". ";
				for (int j = 1;j <= spaces;j++)
				{
					std::cout << "  ";
				}
				std::cout << ". ";
				for (int j = 1;j <= spaces;j++)
				{
					std::cout << "  ";
				}
				std::cout << ".";
			}
			std::cout << std::endl;
		}
	}
	return 0;
}