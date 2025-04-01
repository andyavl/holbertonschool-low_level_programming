#include <stdio.h>
#include "lists.h"

/**
 * list_len - lenght of list
 * @h: linked list
 * Return: amount of elements
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;

	return (i);
}
