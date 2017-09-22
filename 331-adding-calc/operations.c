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

operation_result subtract(int a, int b, int *res)
{
	operation_result ret = operation_success;
	*res = a + inverse2(b);

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

operation_result multiply(int a, int b, int *res)
{
	operation_result ret = operation_success;

	if(a == 0 || b == 0)
	{
		*res = 0;
	}
	else
	{
		if(b < 0)
			*res = inverse2(mul_pos(a, inverse2(b)));
		else
			*res = mul_pos(a, b);
	}

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
		subtract(a_sub, b, &a_sub);
	}

	if(a_sub)
		subtract(ret, 1, &ret);
	return ret;
}

operation_result divide(int a, int b, int *res)
{
	operation_result ret = operation_success;

	if(b == 0)
	{
		ret = operation_dividebyzero;
	}
	else 
	{
		if(is_same_sign(a, b))
			*res = div_same(a, b);
		else
			*res = inverse2(div_same(a, inverse2(b)));

		if(*res == 0)
			ret = operation_nonintegral;
	}

	return ret; 
}

operation_result exponential(int a, int b, int *res)
{
	operation_result ret = operation_success;

	if(b < 0)
	{
		ret = operation_nonintegral;
	}
	else if(b == 0)
	{
		*res = 1;
	}
	else
	{
		for (int i = 0; i < b - 1; ++i)
		{
			multiply(*res, a, res);
		}
	}

	return ret;
}