#include <stdio.h>
#include <stdlib.h>

typedef struct _tagMyST
{
	int a;
	float f;
}MYST;

int main()
{
	// ����ü�� ������
	MYST s = {};

	MYST* pST = &s;

	(*pST).a = 100;
	pST->a = 101;
	pST->f = 3.14f;

	return 0;
}
