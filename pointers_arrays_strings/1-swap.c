#include "main.h"

/**
 * swap_int - swaps the value of two int
 * @a: value to swap with b
 * @b: value to swap with a
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
