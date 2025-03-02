#include "main.h"
#include <stdio.h>

/**
 * print_array - prints values stored in an array
 * @a: array
 * @n: numbers of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	n = n - 1;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);

		if (i < n)
		printf(", ");
	}
	printf("\n");
}
