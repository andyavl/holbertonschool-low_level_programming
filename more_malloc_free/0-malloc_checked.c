#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory and checks if NULL
 * @b: value to allocate
 * Return: allocated value
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);

	return (i);
}
