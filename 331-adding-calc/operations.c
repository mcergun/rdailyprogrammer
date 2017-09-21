#include "operations.h"
#define MAX_VAL 0xFFFFFFFF;

// 1s inverse of the given integer
int inverse1(int a)
{
	int ret = a ^ MAX_VAL;
	return ret;
}

// 2s inverse of the given integer
int inverse2(int a)
{
	int ret = a ^ MAX_VAL;
	ret++;
	return ret;
}

int subtract(int a, int b)
{
	int ret = a + inverse2(b);
	return ret;
}