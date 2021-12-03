#include <iostream>


#include "Arr.h"
// 메모리 영역
// 스택
// 데이터
// ROM
// 힙 영역(동적할당)

int main()
{
	// 동적 할당
	// 1. 런타임 중에 대응 가능

	int iInput = 0;
	scanf_s("%d", &iInput);

	int* pInt = nullptr;

	if (100 == iInput)
	{
		pInt = (int*)malloc(100);
	}

	if (nullptr != pInt)
	{
		free(pInt);
	}

	// 가변 배열 불가능 하다.
	int index = 100;
	// int arr[index] = {}; 
	tArr arr;
	tArr arr2;



	return 0;
}