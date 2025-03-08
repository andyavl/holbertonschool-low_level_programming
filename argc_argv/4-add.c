#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that sums with its arguments
 * Return: returns 1 an argument is not a number;
 * @argc: amount command line elements
 * @argv: a pointer to string of command line elements
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("0\n");
	return (0);
}
