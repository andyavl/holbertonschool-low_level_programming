#include "main.h"
/**
 * *_memcpy - copies memory area
 * @src: source to copy
 * @dest: destination
 * @n: number of copies
 * Return: copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	dest[i] = src[i];

	return (dest);
}
