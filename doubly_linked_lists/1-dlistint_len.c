#include "lists.h"

/**
 * dlistint_len - return number of elements of the list
 * @h: pointer to head
 * Return: amount of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		tmp = tmp->next;
	}
	return (i);
}
