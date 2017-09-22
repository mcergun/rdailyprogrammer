#include <stdio.h>
#include <stdlib.h>

#include "operations.h"

char * operation_result_strings[] = {
	"",
	"divide by zero",
	"underflow",
	"overflow",
	"non integral",
	"unknown error",
};

int main(int argc, char **argv)
{
	if(argc > 3)
	{
		int a = atoi(argv[1]);
		char op = *argv[2];
		int b = atoi(argv[3]);
		int ans = 0;
		operation_result ret = operation_success;
		switch(op)
		{
		case '+':
			ans = a + b;
			break;
		case '-':
			ret = subtract(a, b, &ans);
			break;
		case '*':
			ret = multiply(a, b, &ans);
			break;
		case '/':
			ret = divide(a, b, &ans);
			break;
		case '^':
			ret = exponential(a, b, &ans);
			break;
		}
		if(ret == operation_success)
			printf("%s %s %s = %d\n", argv[1], argv[2], argv[3],
				ans);
		else
			printf("operation failed: %s\n", operation_result_strings[ret]);
	}
	else
	{
		printf("Usage: %s int1 op int2\n", argv[0]);
	}
}