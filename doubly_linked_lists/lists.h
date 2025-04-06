#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct d_node - Doubly linked list
 * @n: int data
 * @next: pointer to next list
 * @prev: pointer to prev list
 */
typedef struct d_node
{
	int n;
	struct d_node *next;
	struct d_node *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
#endif
