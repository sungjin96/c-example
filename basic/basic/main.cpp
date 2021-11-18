#include <stdio.h>

#include "common.h"
#include "func.h"


int main()
{
	g_iExtern = 100;

	int result = Add(1, 3);
	printf("Test %d\n", g_iExtern);
	printf("result %d", result);

	return 0;
}