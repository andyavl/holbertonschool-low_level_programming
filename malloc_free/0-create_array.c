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
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		arr[i] = c;

	if (arr == NULL)
		return (NULL);

	return (arr);
}
