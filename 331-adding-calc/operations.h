#ifndef _OPERATIONS_H_
#define _OPERATIONS_H_

#define MAX_VAL 0xFFFFFFFF

typedef enum
{
	operation_success,
	operation_dividebyzero,
	operation_underflow,
	operation_overflow,
	operation_nonintegral,
	operation_unknownerror,
} operation_result;

operation_result subtract(int a, int b, int *res);
operation_result multiply(int a, int b, int *res);
operation_result divide(int a, int b, int *res);
operation_result exponential(int a, int b, int *res);

#endif