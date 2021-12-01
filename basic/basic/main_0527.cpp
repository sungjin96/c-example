#include <iostream>

// 메모리 영역
// 스택
// 데이터
// ROM
// 힙 영역(동적할당)

int main()
{
	int* pInt = (int*)malloc(100);
	
	float* pF = (float*)malloc(4);

	return 0;
}