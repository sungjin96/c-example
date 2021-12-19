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
	�� ����
	�� �����̶� �ǹ��� �������� ū ���� ���� ���� ���� ��ü�ϴ� ���� ����Դϴ�.
	���� ���� ��ü�ϴµ��� N��, ������ ��� ��ü ���Ŀ� ���Ұ� ������ ���������Ƿ� ��ü ���Ҹ� ������ ���� ��������� logN���� �ҿ�ǹǷ� ��������� O(NlogN)�� �ð� ���⵵�� �����ϴ�.
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