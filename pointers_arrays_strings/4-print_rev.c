#include "main.h"

/**
 * _puts - prints a string
 * @str: input string
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
