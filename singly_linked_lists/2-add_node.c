#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_node - adds new node at the beggining of the list
 * @head: pointer to head node
 * @str: string
 * Return: node
 */
list_t *add_node(list_t **head, const char *str)
{
	int ln;
	list_t *tmp;

	for (ln = 0; str[ln] != '\0'; ln++)
	{}

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);
	tmp->len = ln;
	tmp->next = *head;

	*head = tmp;

	return (tmp);
}
