#include <stdio.h>

typedef struct _tagMyST
{
	int a;
	float b;
}MYST;

typedef struct _tagBig
{
	MYST k;
	int i;
	char c;
}BIG;

int main()
{
	MYST t = { 100, 3.14f};

	sizeof(t);

	t.a = 10;
	t.b = 10.1234f;

	sizeof(t);

	return 0;
}