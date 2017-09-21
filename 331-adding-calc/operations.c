#include "operations.h"

#include <stdio.h>
#include <unistd.h>

#define MAX_VAL 0xFFFFFFFF;

static inline int get_sign(int a)
{
	return a < 0;
}

// 1s inverse of the given integer
static int inverse1(int a)
{
	int ret = a ^ MAX_VAL;
	return ret;
}

// 2s inverse of the given integer
static int inverse2(int a)
{
	int ret = inverse1(a);
	ret++;
	return ret;
}

int subtract(int a, int b)
{
	int ret = a + inverse2(b);
	return ret;
}

// multiplies numbers only when b is positive
static int mul_pos(int a, int b)
{
	int ret = 0;
	for (int i = 0; i < b; ++i)
	{
		ret = ret + a;
	}
	return ret;
}

int multiply(int a, int b)
{
	int ret = 0;

	if(b < 0)
		ret = inverse2(mul_pos(a, inverse2(b)));
	else
		ret = mul_pos(a, b);

	return ret;
}

static int div_same(int a, int b)
{
	int ret = 0;
	int a_sub = a;
	int first_sign = get_sign(a);
	int ctl = first_sign == get_sign(a_sub);
	while(ctl && a_sub)
	{
		ret++;
		a_sub = subtract(a_sub, b);
		ctl = first_sign == get_sign(a_sub);
		printf("a_sub = %d, ctl = %08X\n", a_sub, ctl);
		usleep(100000);
	}

	if(a_sub)
		ret = subtract(ret, 1);

	return ret;
}

int divide(int a, int b)
{
	int same_sign = (~a ^ b) & 0x80000000;
	int ret = 0;

	if(same_sign)
		ret = div_same(a, b);
	else
		ret = inverse2(div_same(a, inverse2(b)));

	return ret; 
}