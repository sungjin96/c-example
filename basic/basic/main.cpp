#include <stdio.h>
#include <stdlib.h>



int main()
{
	// 포인터 변수
	// 자료형 변수명
	int* pInt = nullptr;

	char* pChar = nullptr;
	short* pShort = nullptr;

	int iSize = sizeof(pInt);

	int i = 0;
	pInt = &i;
	pInt += 1;

	// pInt 는 int* 변수 이기 때문에 가리키는 곳을 int(4바이트) 라고 인식한다.
	// 예 ) PInt 의 시작 주소값이 100 이면 끝나는 곳은 무조건 104가 된다.
	// 그리고 만약 pInt(int*)를 +1 하면 PInt는 주소값이기 때문에 기존 100~104 이면 105~109가 추가되어 100~109가 된다. 즉, sizeOf(int)단위로 증가한다
	// ** 이때 +1 했다고 int의 정수 1 이 증가하는게 아님 이유는 int*이기 때문에

	// 포인터와 배열
	// 배열의 특징
	// 1. 메모리가 연속적인 구조이다.
	// 2. 배열의 이름은 배열의 시작 주소이다.
	int iArr[10] = {};

	// int 단위로 접근
	*(iArr) = 10;	  // iArr[0] = 10;
	*(iArr + 1) = 20; // iArr[1] = 20;

	return 0;
}
