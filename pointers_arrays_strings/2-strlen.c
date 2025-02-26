#include "main.h"

/**
 * _strlen - measures the lenght of a string
 * @s: input string to measure
 * Return: returns the lenght
 */

int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; l++)
	{
		s++;
	}
	return (l);
}
