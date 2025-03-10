#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * Return: eturn NULL if size if 0
 * @size: size of array
 * @c: character
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return ('\0');

	arr = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
