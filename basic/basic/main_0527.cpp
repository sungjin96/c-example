#include <iostream>


#include "Arr.h"
// �޸� ����
// ����
// ������
// ROM
// �� ����(�����Ҵ�)

int main()
{
	// ���� �Ҵ�
	// 1. ��Ÿ�� �߿� ���� ����

	int iInput = 0;
	scanf_s("%d", &iInput);

	int* pInt = nullptr;

	if (100 == iInput)
	{
		pInt = (int*)malloc(100);
	}

	if (nullptr != pInt)
	{
		free(pInt);
	}

	// ���� �迭 �Ұ��� �ϴ�.
	int index = 100;
	// int arr[index] = {}; 
	tArr arr;
	tArr arr2;



	return 0;
}