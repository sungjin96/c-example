#include <stdio.h>

#include "common.h"
#include "func.h"


int main()
{
	g_iExtern = 100;

	int result = Add(1, 3);
	printf("Test %d\n", g_iExtern);
	printf("result %d", result);

	// 포인터 변수
	// 주소를 가리키는 변수
	int i = 100;
	float f = 1.1f;

	float* pFloat = &f;
	int* pInt = &i;

	*pInt = 200;

	return 0;
}
