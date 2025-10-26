#include <iostream>

int main()
{
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;
	int x = -100;
	while (x <= 100)
	{
		int result = a * pow(x, 4) + b * pow(x, 3) + c * pow(x, 2) + d * x + e;
		if (result >= 0)
			std::cout << x << " ";
		x++;
	}
	return 0;
}