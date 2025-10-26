#include <iostream>

int main()
{
	int number;
	std::cin >> number;
	int maxDigit, maxCounter=0;
	for (int i = 0;i <= 9;i++)
	{
		int counter = 0,temporary=number;
		while (temporary > 0)
		{
			int digit = temporary % 10;
			if (digit == i)
				counter++;
			temporary /= 10;
		}
		if (counter > maxCounter)
		{
			maxCounter = counter;
			maxDigit = i;
		}
	}
	std::cout << maxDigit << std::endl;
	return 0;
}