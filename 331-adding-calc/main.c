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
			subtract(a, b, &ans);
			break;
		case '*':
			multiply(a, b, &ans);
			break;
		case '/':
			divide(a, b, &ans);
			break;
		case '^':
			exponential(a, b, &ans);
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