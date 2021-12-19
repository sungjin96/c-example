#include <stdio.h>
#include <stdlib.h>

int a[1000];

int swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
/*
	���� ����
	���� �����̶� �� ���ڸ� ������ ��ġ�� ���� �ϴ� ���� ����Դϴ�.
	�� ��ġ�� �����ϴ� ���� N��, �����ϴ� Ƚ���� N���̹Ƿ� O(N^2)�� �ð� ���⵵�� �����ϴ�.
	( �ð� ���⵵�� ���������̶� ������, ���� ���ĺ��� ���� �� ���� )
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