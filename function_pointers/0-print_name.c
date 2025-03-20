#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: desired name
 * @f: fuction to be called
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
