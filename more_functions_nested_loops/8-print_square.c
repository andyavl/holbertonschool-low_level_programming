#include "main.h"

/**
 * print_square - prints a square with #.
 * @size: input value for the size of the square.
 */
void print_square(int size)
{
	int l;
	int s;

	if (size > 0)
	{
		for (l = 0 ; l < size ; l++)
		{
			for (s = 0 ; s < size ; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
