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
#endif
