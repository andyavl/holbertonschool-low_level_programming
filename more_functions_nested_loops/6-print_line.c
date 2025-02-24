#include "main.h"

/**
 * print_line - prints a line.
 * @n: input value for line lenght.
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n ; l++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
