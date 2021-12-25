#include <stdio.h>
#define MAX 10000

void radixSort(int* a, int n) {
	int res[MAX], maxValue = 0;
	int exp = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] > maxValue) maxValue = a[i];
	}

	while (maxValue / exp > 0) {
		int bucket[10] = { 0 };
		for (int i = 0; i < n; i++) bucket[a[i] / exp % 10]++;
		for (int i = 1; i < 10; i++) bucket[i] += bucket[i-1];
		for (int i = n - 1; i >= 0; i--) {
			res[--bucket[a[i] / exp % 10] = a[i];
		}
		for (int i = 0; i < n; i++)a[i] = res[i];
		exp *= 10;
	}
}

/*
	��� ����
	��� ������ �ڸ����� �������� ���ʴ�� �����͸� �����ϴ� �˰����Դϴ�.
	�� �����͸� �ڸ����� �������� �з��ϹǷ� ���� ū �ڸ����� D��� ���� �� O(DN)�� �ð� ���⵵�� �����ϴ�.
*/
int main() {
	int a[MAX];
	int i, n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	radixSort(a, n);

	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}