#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies with its arguments
 * Return: returns 1 if not two arguments;
 * @argc: amount command line elements
 * @argv: a pointer to string of command line elements
 */

int main(int argc, char *argv[])
{
	int i;
	int mult = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mult = mult * atoi(argv[i]);
		}
		printf("%d\n", mult);
		return (0);
	}
	printf("Error\n");
	return (1);
}
