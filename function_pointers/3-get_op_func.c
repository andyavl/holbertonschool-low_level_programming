#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - looks for the correct fuction
 * @s: operator to use
 * Return: fuction or NULL if operator doesnt match
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op) && s[1] == '\0')
		return (ops[i].f);
		i++;
	}
	return (NULL);
}
