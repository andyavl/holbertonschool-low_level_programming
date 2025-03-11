#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that duplicates a string
 * Return: eturn NULL if size if 0
 * @str: string to duplicate
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *arr;

	for (i = 0; str[i] != '\0'; i++)
	{}
	arr = malloc(i * sizeof(char));

	if (i == 0 || arr == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		arr[j] = str[j];

	return (arr);
}
