#include <stdio.h>
#include <stdlib.h>
#define MAX_VALUE 10001

int n, m;
int a[MAX_VALUE];

/*
	��� ����
	��� ������ ũ�⸦ �������� �������� ������ ���� ���� �˰����Դϴ�.
	�� �����͸� �ٷ� ũ�⸦ �з��ϹǷ� O(N)�� �ð� ���⵵�� �����ϴ�.
*/
int main(void) {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) { scanf("%d", &m); a[m]++; }
	for (int i = 0; i < MAX_VALUE; i++) {
		while (a[i] != 0) { printf("%d ", i); a[i]--; }
	}
	return 0;
}