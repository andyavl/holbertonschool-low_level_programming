#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - executes fuction
 * @argc: amount of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	int (*pf)(int, int);

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		pf = get_op_func(argv[2]);
		if (pf == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		c = (*pf)(a, b);
		printf("%d\n", c);
		return (0);
	}
	printf("Error\n");
	exit(98);
}
