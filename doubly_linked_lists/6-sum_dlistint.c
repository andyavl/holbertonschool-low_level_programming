#include "lists.h"

/**
 * sum_dlistint - returns sums of all the data of the linked list
 * @head: pointer to head address
 * Return: sum of all n data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp;

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
