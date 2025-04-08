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
	list_t *tmp2;

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
		tmp2 = *head;
		while (tmp2->next != NULL)
			tmp2 = tmp2->next;
		tmp2->next = tmp;
	}
	return (tmp);
}
