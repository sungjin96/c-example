#include <stdio.h>
#include <stdlib.h>

void Test(int* a)
{
	*a = 500;
}


int main()
{
	const int i = 100;

	int a = 0;
	int* pInt = &a;

	*pInt = 1;
	pInt = nullptr;

	// const ������
	int b = 0;
	const int* pConstInt = &a;

	//*pConstInt = 100;
	pConstInt = &b;

	int* const pIntConst = &a;
	*pIntConst = 400;
	//pIntConst = &b;

	// �ʱ�ȭ �� ����Ų ��� ����Ŵ, ����Ű�� ������ ���� �� �� ����
	const int* const pConstINtConst = nullptr;


	return 0;
}
