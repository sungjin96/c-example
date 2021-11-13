#include <stdio.h>

// ====== 변수의 종류
// 전역변수
// 지역변수
// 정적변수 (static)
// 외부변수 (extern)

// ===== 메모리 영역
// 스택 영역
// 데이터 영역
//   프로그램 시작 시 생성
//   프로그램 종료 시 해제
// 읽기 전용(코드, ROM)
// 힙 역역

// 전역변수
int g_i = 0; // Data 영역

#include "func.h"

int main()
{
	int result = Add(1, 5);

	return 0;
}