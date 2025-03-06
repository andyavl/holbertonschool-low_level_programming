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
	int i, j;
	char tmp = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j] && accept[i] != tmp)
			{
				c++;
				tmp = accept[i];
			}
		}
	}
	if (accept[i] == s[j])
	{
		c++;
		return (c);
	}
	return (c);
}
