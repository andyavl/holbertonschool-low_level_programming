#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int alphaX10 = 0;

	while (alphaX10 < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		alphaX10++;
		c = 'a';
	}
}
