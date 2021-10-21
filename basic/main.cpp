#include <stdio.h>


int Factorial(int _iNum)
{
	int result = 1;

	for (int j = 0; j < _iNum - 1; ++j)
	{
		result *= (j + 2);
	}
	return result;
}


// i = 4
// 1 * 2 * 3 * 4
int main()
{
	int result = Factorial(4);
	printf("Result : %d\n", result);

	return 0;
}