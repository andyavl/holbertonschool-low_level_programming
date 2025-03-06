#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - searches a string for any of a set byte
 * @s: string
 * @accept: accepted byte
 * Return: returns first occurrence or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}
	if (*s == accept[i])
		return (s);
	else
		return (0);
}
