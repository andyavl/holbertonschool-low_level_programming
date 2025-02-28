#include "main.h"

/**
 * *_strcpy - copy source to a destination
 * @dest: destination
 * @src: source
 * Return: returns copy
 */
char *_strcpy(char *dest, char *src)
{
	int ln;

	for (ln = 0; src[ln] != '\0'; ln++)
	dest[ln] = src[ln];

	ln++;
	dest[ln] = src[ln];
	return (dest);
}
