#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: input value for triangle size.
 */
void print_triangle(int size)
{
	int n;
	int i;
	int d;

	if (size > 0)
	{
		for (n = size ; n > 0 ; n--)
		{
			for (i = 1; i < n; i++)
			{
				_putchar(' ');
			}
			for (d = n; d <= size ; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
