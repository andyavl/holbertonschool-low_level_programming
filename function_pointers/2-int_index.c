#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: numbers to check
 * @size: size of the array
 * @cmp: function that compares
 * Return: returns i for the first comparison found, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
