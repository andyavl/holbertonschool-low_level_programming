#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from input number to 98
 * @n: the input number
 */

void print_to_98(int n)
{
	int printN;

	if (n < 98)
	{
		for (printN = n; printN < 98; printN++)
		{
			printf("%d, ", printN);
		}
	}
	else if (n >= 98)
	{
		for (printN = n; printN > 98; printN--)
		{
			printf("%d, ", printN);
		}
	}
	printf("%d\n", printN);
}
