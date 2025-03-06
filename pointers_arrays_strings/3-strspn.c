#include "main.h"
#include <stddef.h>
/**
 * *_strspn - gets the length of a prefix substring
 * @s: string
 * @accept: accepted characters
 * Return: returns length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				c++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (c);
		}
	}
	return (c);
}
