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
int g_i = 0;
// 정적변수

#include "func.h"
#include "common.h"

int main()
{
	++g_iStatic;
	printf("%d", g_iStatic);

	return 0;
}