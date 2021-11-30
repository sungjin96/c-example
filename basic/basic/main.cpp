#include <stdio.h>
#include <stdlib.h>

typedef struct _tagMyST
{
	int a;
	float f;
}MYST;

int main()
{
	// 구조체와 포인터
	MYST s = {};

	MYST* pST = &s;

	(*pST).a = 100;

	return 0;
}
