#ifndef LISTS_H
#define LISTS_H

/**
 * struct node - singly linked list
 * @str: string data
 * @len: int data
 * @next: pointer to next list
 */
typedef struct node
{
	char *str;
	int len;
	struct node *next;
} list_t;

size_t print_list(const list_t *h);

#endif
