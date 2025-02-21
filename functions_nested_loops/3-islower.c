#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: the input character to compare
 *
 * Return: 1 if lowercase 0 if not
 */

int _islower(int c)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		if (c == letter)
		{
			return (1);
		}
		letter++;
	}
	return (0);
}
