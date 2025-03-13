#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * Return: Return NULL if size is 0, if nmemb is 0 or if malloc fails.
 * @size: size of array
 * @nmemb: amount of elements
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
		arr[i] = 0;

	return (arr);
}
