#include "lists.h"

/**
 * free_dlistint- frees a list
 * @head: list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
