#include <iostream>

// �޸� ����
// ����
// ������
// ROM
// �� ����(�����Ҵ�)

int main()
{
	// ���� �Ҵ�
	// 1. ��Ÿ�� �߿� ���� ����
	// 2. 

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


	return 0;
}