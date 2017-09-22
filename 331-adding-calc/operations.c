#include "operations.h"

static inline int get_sign(int a)
{
	return a < 0;
}

static inline int is_same_sign(int a, int b)
{
	return get_sign(a) == get_sign(b);
}

// 1s inverse of the given integer
static int inverse1(int a)
{
	int ret = 0;
	while(a < MAX_VAL)
	{
		ret++;
		a++;
	}
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
	while(first_sign == get_sign(a_sub) && a_sub)
	{
		ret++;
		a_sub = subtract(a_sub, b);
	}

	if(a_sub)
		ret = subtract(ret, 1);

	return ret;
}

int divide(int a, int b)
{
	int ret = 0;

	if(is_same_sign(a, b))
		ret = div_same(a, b);
	else
		ret = inverse2(div_same(a, inverse2(b)));

	return ret; 
}