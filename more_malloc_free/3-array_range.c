#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of intigers
 * @min: minimum range
 * @max: maximum range
 * Return: NULL if min > max or if malloc fails. Else, pointer of new array.
 */

int *array_range(int min, int max)
{
	int i, j;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0, j = min; j <= max; i++, j++)
	{
		arr[i] = j;
	}
	return (arr);
}
