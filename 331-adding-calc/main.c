#include <stdio.h>
#include <stdlib.h>

#include "operations.h"

int main(int argc, char **argv)
{
	if(argc > 3)
	{
		int a = atoi(argv[1]);
		char op = *argv[2];
		int b = atoi(argv[3]);
		int ans = 0;
		switch(op)
		{
		case '+':
			ans = a + b;
			break;
		case '-':
			ans = subtract(a, b);
			break;
		case '*':
			ans = multiply(a, b);
			break;
		case '/':
			ans = divide(a, b);
			break;
		}
		printf("%s %s %s = %d\n", argv[1], argv[2], argv[3],
			ans);
	}
	else
	{
		printf("Usage: %s int1 op int2\n", argv[0]);
	}
}