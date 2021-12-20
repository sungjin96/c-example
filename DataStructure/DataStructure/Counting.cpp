#include <stdio.h>
#include <stdlib.h>
#define MAX_VALUE 10001

int n, m;
int a[MAX_VALUE];

/*
	계수 정렬
	계수 정렬은 크기를 기준으로 데이터의 개수를 세는 정렬 알고리즘입니다.
	각 데이터를 바로 크기를 분류하므로 O(N)의 시간 복잡도를 가집니다.
*/
int main(void) {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) { scanf("%d", &m); a[m]++; }
	for (int i = 0; i < MAX_VALUE; i++) {
		while (a[i] != 0) { printf("%d ", i); a[i]--; }
	}
	return 0;
}