#include "main.h"
#include <stddef.h>
/**
 * *_strchr - locates a char in a string
 * @s: string
 * @c: character
 * Return: returns first occurrence or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);

		else
		s++;
	}
	return (0);
}
