#include "lists.h"

/**
 * print_dlistint - prints all the elements of the list
 * @h: pointer to head
 * Return: amount of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t i;

	tmp = h;

	for (i = 0; tmp; i++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (i);
}
