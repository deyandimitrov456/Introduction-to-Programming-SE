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
	int range = number * number;
	for (int i = 0;i < number;i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 1 + i * number;j <= number * (i + 1);j++)
			{
				std::cout << j << " ";
			}
		}
		else
		{
			for (int j = number * (i + 1);j >= 1 + i * number;j--)
			{
				std::cout << j << " ";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}