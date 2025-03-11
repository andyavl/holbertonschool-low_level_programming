#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * Return: Return NULL if fuction fails
 * @s1: 1st string
 * @s2: 2nd string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, a, b;
	unsigned int size;
	char *arr;

	if (s1 == NULL)
	{
		i = 0;
		s1 = "";
	}
	else
	for (i = 0; s1[i] != '\0'; i++)
	{}

	if (s2 == NULL)
	{
		j = 0;
		s2 = "";
	}
	else
	for (j = 0; s2[j] != '\0'; j++)
	{}

	size = i + j;
	arr = malloc((size + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (a = 0, b = 0; a < size; a++)
	{
		if (a < i)
		arr[a] = s1[a];
		else
		{
			arr[a] = s2[b];
			b++;
		}
	}
	return (arr);
}
