#include <stdio.h>
#include <stdlib.h>

int a[1000];
int swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void quickSort(int start, int end) {
	if (start >= end) return;
	int key = start, i = start + 1, j = end, temp;
	while (i <= j) {
		while (i <= end && a[i] <= a[key]) i++;
		while (j > start && a[j] >= a[key])j--;
		if (i > j)swap(&a[key], &a[j]);
		else swap(&a[i], &a[j]);
	}
	quickSort(start, j - 1);
	quickSort(j + 1, end);
}
/*
	퀵 정렬
	퀵 정렬이란 피벗을 기준으로 큰 값과 작은 값을 서로 교체하는 정렬 기법입니다.
	값을 서로 교체하는데에 N번, 엇갈린 경우 교체 이후에 원소가 반으로 나누어지므로 전체 원소를 나누는 데에 평균적으로 logN번이 소요되므로 평균적으로 O(NlogN)의 시간 복잡도를 가집니다.
*/
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	quickSort(0, n - 1);
	for (int i = 0; i < n; i++) printf("%d", &a[i]);
	system("pause");
	return 0;
}