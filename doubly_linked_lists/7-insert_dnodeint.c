#include "lists.h"

/**
 * dlist_len - lenght of list
 * @h: pointer to list head
 * Return: lenght
 */
unsigned int dlist_len(dlistint_t *h)
{
	dlistint_t *tmp = h;
	unsigned int ln = 0;

	while (tmp)
	{
		tmp = tmp->next;
		ln++;
	}
	return (ln);
}
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to head
 * @idx: the node to insert
 * @n: data to insert in new node
 * Return: node inserted
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp = *h;
	dlistint_t *new;

	if (dlist_len(*h) < idx)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (dlist_len(*h) == idx)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	while (tmp)
	{
		if (i == idx - 1)
			new->prev = tmp;
		if (i == idx)
		{
			new->next = tmp;
			tmp->prev = new;
			tmp = new->prev;
			tmp->next = new;
		}
		tmp = tmp->next;
		i++;
	}
	return (new);
}
