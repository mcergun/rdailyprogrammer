#include <stdio.h>
#include <stdlib.h>

#include "operations.h"

int main(int argc, char **argv)
{
	if(argc > 2)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		printf("%d - %d = %d\n", a, b, subtract(a, b));
	}
	else
	{
		printf("Hi world!\n");
	}
}