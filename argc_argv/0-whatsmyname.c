#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that names itself
 * Return: returns 0;
 * @argc: amount command line elements
 * @argv: string of command line elements
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
