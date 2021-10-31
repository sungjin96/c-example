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

// 피보나치 수열
// 1 1 2 3 5 8 13 21 34 55........................
int Fibonacci(int _iNum)
{
	int temp = 1;
	int result = 1;
	if(1 == _iNum || 2 == _iNum)
	{
		return 1;
	}

	for(int i=2; i<_iNum; i++)
	{
		int x = result;
		result = temp + result;
		temp = x;
	}
	return result;
}

int Fibonacci_Re(int _iNum)
{
	if(1 == _iNum || 2 == _iNum)
	{
		return 1;
	}

	return Fibonacci_Re(_iNum - 1) + Fibonacci_Re(_iNum - 2);
}


int main()
{
	int result = Fibonacci_Re(5);
	printf("Result : %d\n", result);

	return 0;
}