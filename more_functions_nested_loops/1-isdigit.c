#include "main.h"

/**
 * _isdigit - checks if its a digit
 * @c: the input character to compare
 *
 * Return: 1 if its digit, 0 if not
 */

int _isdigit(int c)
{
	int digit = '0';

	while (digit <= '9')
	{
		if (c == digit)
		{
			return (1);
		}
		digit++;
	}

	return (0);
}
