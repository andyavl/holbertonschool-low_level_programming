#include "main.h"

/**
 * _isalpha - checks if its alpha
 * @c: the input character to compare
 *
 * Return: 1 if its alpha 0 if not
 */

int _isalpha(int c)
{
	int lower = 'a';
	int upper = 'A';

	while (lower <= 'z')
	{
		if (c == lower)
		{
			return (1);
		}
		lower++;
	}

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
