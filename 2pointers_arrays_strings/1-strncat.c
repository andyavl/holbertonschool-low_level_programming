#include "main.h"

/**
 * *_strncat - adds source to a destination
 * @dest: destination
 * @src: source
 * @n: byte limit from src
 * Return: returns concatenated strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; j < n && src[j] != '\0' ; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
