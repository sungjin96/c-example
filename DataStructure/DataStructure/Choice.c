#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000

int a[SIZE];

int swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}


// 선택 정렬
// 선택 정렬이란 가장 작은 것을 선택해서 앞으로 보내는 정렬 기법.
// 가장 작은 것을 선택하는 데에 N번, 앞으로 보내는 데에 N번의 연산으로 O(N^2)의 시간 복잡도를 가집니다.
int main() {
	int n, min, index;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++) {
		min = INT_MAX;
		for (int j = i; j < n; j++) {
			if (min > a[j]) {
				min = a[j];
				index = j;
			}
		}
		swap(&a[i], &a[index]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}


	return 0;
}