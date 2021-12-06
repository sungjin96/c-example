#pragma once

// int
typedef struct _tabArr
{
	int* pInt;
	int iCount;
	int iMaxCount;
} tArr;

void InitArr(tArr* _pArr);
void ReleaseArr(tArr* _pArr);

class Array;