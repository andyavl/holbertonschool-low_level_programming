#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of list
 * @head: double pointer to head
 * @n: number to add to node
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *tmp2 = *head;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL || head == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		tmp->prev = NULL;
		*head = tmp;
	}
	else
	{
		while (tmp2->next)
			tmp2 = tmp2->next;
		tmp->prev = tmp2;
		tmp2->next = tmp;
	}
	return (tmp);
}
