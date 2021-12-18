#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000

int a[SIZE];

int swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}


// ���� ����
// ���� �����̶� ���� ���� ���� �����ؼ� ������ ������ ���� ���.
// ���� ���� ���� �����ϴ� ���� N��, ������ ������ ���� N���� �������� O(N^2)�� �ð� ���⵵�� �����ϴ�.
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