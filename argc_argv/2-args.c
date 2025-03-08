#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments
 * Return: returns 0;
 * @argc: amount command line elements
 * @argv: a pointer to string of command line elements
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
