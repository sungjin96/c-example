#include "Arr.h"

#include <iostream>

void InitArr(tArr* _pArr)
{
	_pArr->pInt = (int*)malloc(sizeof(int) * 2);
	_pArr->iCount = 0;
	_pArr->iMaxCount = 2;
}

void ReleaseArr(tArr* _pArr)
{
	free(_pArr->pInt);
	_pArr->iCount = 0;
	_pArr->iMaxCount = 0;
}

class Array {
	tArr array;

	Array(int size) {
		array.iCount = size;
		array.iMaxCount = 0;
		array.pInt = (int*)malloc(sizeof(int) * size);
	}
};
