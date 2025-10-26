#include <iostream>

int main()
{
	int start, end,counter=0;
	std::cin >> start >> end;
	for (int i = start;i <= end;i++)
	{
		int number = i;
		bool different = true;
		while (number > 10&&different)
		{
			int currentNumber = number % 10;
			int otherNumber = number /= 10;
			while (otherNumber > 0)
			{
				if (currentNumber == otherNumber % 10)
				{
					different = false;
					break;
				}
				otherNumber /= 10;
			}
		}
		if (different == true)
			counter++;
	}
	std::cout << counter << std::endl;
	return 0;
}