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
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: double pointer to head
 * @index: position of node to be deleted
 * Return: 1 on success or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int ln = dlist_len(*head);
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);
	if (index >= ln)
		return (-1);
	if (index == 0 && ln > 0)
	{
		*head = tmp->next;
		if (ln != 1)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (index == ln - 1)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
