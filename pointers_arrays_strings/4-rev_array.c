#include "main.h"

/**
 * reverse_array - prints array in reverse
 * @a: array
 * @n: numbers of elements to be printed
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	n = n - 1;

	for (i = 0; i <= n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
