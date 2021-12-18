#include <stdio.h>
#include <stdlib.h>
#define SIZE = 1000

int a[SIZE];

int swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
/*
	삽입 정렬
	삽입 정렬이란 각 숫자를 적절한 위치에 삽입 하는 정렬 기법입니다.
	들어갈 위치를 선택하는 데에 N번, 선택하는 횟수로 N번이므로 O(N^2)의 시간 복잡도를 가집니다.
	( 시간 복잡도는 선택정렬이랑 같지만, 선택 정렬보다 조금 더 빠름 )
*/
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < n - 1; i++) {
		int j = i;
		while (j >= 0 && a[j] > a[j + 1]) {
			swap(&a[j], &a[j + 1]);
			j--;
		}
	}
	for (int i = 0; i < n; i++) printf("%d ", a[i]);

	sysout("pause");
	return 0;
}