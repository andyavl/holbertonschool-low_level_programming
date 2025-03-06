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
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
{
