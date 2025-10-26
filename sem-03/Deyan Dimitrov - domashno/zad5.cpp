#include <iostream>

int main()
{
	int number;
	std::cin >> number;
	if (number % 2 == 0)
	{
		std::cout << "Number must be uneven!" << std::endl;
		return 0;
	}
	int starCount = number, spaceCount = 0;
	for (int i = 0;i < number/2+1;i++)
	{
		for (int j = 0;j < spaceCount/2;j++)
			std::cout << ' ';
		for (int j = 0;j < starCount;j++)
			std::cout << '*';
		std::cout << std::endl<<std::endl;
		spaceCount += 2;
		starCount -= 2;
	}
	spaceCount -= 2;
	starCount += 2;
	for (int i = 0;i < number / 2;i++)
	{
		spaceCount -= 2;
		starCount += 2;
		for (int j = 0;j < spaceCount / 2;j++)
			std::cout << ' ';
		for (int j = 0;j < starCount;j++)
			std::cout << '*';
		std::cout << std::endl << std::endl;
	}
	return 0;
}