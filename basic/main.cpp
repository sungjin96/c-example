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

// 재귀함수
int Factorial_Re(int _iNum)
{
	if(1 == _iNum) {
		return 1;
	}
	return _iNum * Factorial_Re(_iNum-1);
}

int main()
{
	int result = Factorial_Re(4);
	printf("Result : %d\n", result);

	return 0;
}