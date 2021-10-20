#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}



// i = 4
// 1 * 2 * 3 * 4
int main()
{
	int i = 4;
	int result = 1;

	for (int j = 0; j < i - 1; ++j)
	{
		result *= (j + 2);
		printf("Result : %d\n", result);
	}

	return 0;
}