#include "main.h"

/**
 * _strlen - measures the lenght of a string
 * @s: input string to measure
 * Return: returns the lenght
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
