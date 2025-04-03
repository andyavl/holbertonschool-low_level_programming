#include "lists.h"

/**
 * dlistint_len - return number of elements of the list
 * @head: double pointer to head
 * @n: number to add to node
 * Return: amount of elements
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *tmp2 = *head;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL || head == NULL)
		return (NULL);

	tmp->n = n;
	if (*head == NULL)
		tmp->next = NULL;
	else
	{
		tmp->next = tmp2;
		tmp2->prev = tmp;
	}
	tmp->prev = NULL;
	*head = tmp;

	return (tmp);
}
