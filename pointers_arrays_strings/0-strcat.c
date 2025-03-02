#include "main.h"

/**
 * *_strcat - adds source to a destination
 * @dest: destination
 * @src: source
 * Return: returns concatenated strings
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; src[j] != '\0' ; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = src[j];

	return (dest);
}
