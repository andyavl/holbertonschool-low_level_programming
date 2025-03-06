#include "main.h"
#include <stddef.h>
/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: returns first occurrence or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				haystack = haystack + j;
				return (haystack);
			}
		}
	}
	return ('\0');
}
