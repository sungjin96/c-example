#include <stdio.h>
#include <stdlib.h>

void Test(int* a)
{
	*a = 500;
}


int main()
{
	const int i = 100;

	int a = 0;
	int* pInt = &a;

	*pInt = 1;
	pInt = nullptr;

	// const 포인터
	int b = 0;
	const int* pConstInt = &a;

	//*pConstInt = 100;
	pConstInt = &b;

	int* const pIntConst = &a;
	*pIntConst = 400;
	//pIntConst = &b;

	// 초기화 시 가리킨 대상만 가리킴, 가리키는 원본을 수정 할 수 없음
	const int* const pConstINtConst = nullptr;


	return 0;
}
