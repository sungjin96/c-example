#include <iostream>

#include "Arr.h"


int main()
{
	tArr s = {};
	InitArr(&s);
	PushBack(&s, 5);
	ReleaseArr(&s);


	return 0;
}