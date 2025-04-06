#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t linked list
 * @head: pointer to head address
 * @index: the node to get
 * Return: address of node found or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;

	tmp = head;
	while (tmp)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
