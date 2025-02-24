#include "main.h"

/**
 * _isupper - checks if its uppercase
 * @c: the input character to compare
 *
 * Return: 1 if its upper, 0 if not
 */

int _isupper(int c)
{
	int upper = 'A';

	while (upper <= 'Z')
	{
		if (c == upper)
		{
			return (1);
		}
		upper++;
	}

	return (0);
}
