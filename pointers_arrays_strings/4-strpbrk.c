#include "main.h"
#include <stddef.h>
/**
 * *_strbrk - searches a string for any of a set byte
 * @s: string
 * @accept: accepted byte
 * Return: returns first occurrence or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			return (s);

			accept++;
		}
		s++;
	}
	if (*s == *accept)
		return (s);
	else
		return (0);
}
