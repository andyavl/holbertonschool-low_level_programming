#include "main.h"

/**
 * _strlen_recursion - a function that returns length of string
 * @s: string to print
 */

int _strlen_recursion(char *s)
{
	unsigned int c = 0;

	if (*s != '\0')
	{
		c++;
		c = c + _strlen_recursion(s + 1);
	}
	return(c);
}
