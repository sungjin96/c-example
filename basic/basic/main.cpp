#include <stdio.h>
#include <stdlib.h>



int main()
{
	// ������ ����
	// �ڷ��� ������
	int* pInt = nullptr;

	char* pChar = nullptr;
	short* pShort = nullptr;

	int iSize = sizeof(pInt);

	int i = 0;
	pInt = &i;
	pInt += 1;

	// pInt �� int* ���� �̱� ������ ����Ű�� ���� int(4����Ʈ) ��� �ν��Ѵ�.
	// �� ) PInt �� ���� �ּҰ��� 100 �̸� ������ ���� ������ 104�� �ȴ�.
	// �׸��� ���� pInt(int*)�� +1 �ϸ� PInt�� �ּҰ��̱� ������ ���� 100~104 �̸� 105~109�� �߰��Ǿ� 100~109�� �ȴ�. ��, sizeOf(int)������ �����Ѵ�
	// ** �̶� +1 �ߴٰ� int�� ���� 1 �� �����ϴ°� �ƴ� ������ int*�̱� ������

	// �����Ϳ� �迭
	// �迭�� Ư¡
	// 1. �޸𸮰� �������� �����̴�.
	// 2. �迭�� �̸��� �迭�� ���� �ּ��̴�.
	int iArr[10] = {};

	// int ������ ����
	*(iArr) = 10;	  // iArr[0] = 10;
	*(iArr + 1) = 20; // iArr[1] = 20;

	return 0;
}
