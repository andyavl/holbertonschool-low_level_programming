#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of ints
 * Return: Return NULL if fuction fails
 * @width: width of grid
 * @height: height of grid
 */

int **alloc_grid(int width, int height)
{
	int i, j, a;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			while (i > 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (a = 0; a < width; a++)
			arr[j][a] = 0;
	}
	return (arr);
}
