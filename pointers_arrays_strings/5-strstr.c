#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beggining of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[j + 1] == '\0')
		return (haystack + i - j);

		else if (haystack[i] == needle[j])
		j++;

		else
		j = 0;
	}
	return (haystack + i);
}
