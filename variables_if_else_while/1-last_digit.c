#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - assigns a random number to n and prints result
 * Return: value 0.
 */
int main(void)

{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	l = n % 10;
	printf("Last digit of %d is %d ", n, l);

	if (l > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (l < 6 && l != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	else
	{
		printf("and is 0\n");
	}

	return (0);
}
