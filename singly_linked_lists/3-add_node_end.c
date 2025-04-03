#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_node_end - adds new node at the end of the list
 * @head: pointer to head node
 * @str: string
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int ln;
	list_t *tmp;
	list_t *end;

	for (ln = 0; str[ln] != '\0'; ln++)
	{}

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);
	tmp->len = ln;
	tmp->next = NULL;
	
	if (*head == NULL)
		*head = tmp;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = tmp;
	}
	return (tmp);
}
