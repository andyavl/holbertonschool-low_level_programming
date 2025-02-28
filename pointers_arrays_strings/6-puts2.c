#include "main.h"

/**
 * _puts2 - prints every other character of a string
 * @str: input string
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;

		if (*str != '\0')
		str++;
	}
	_putchar('\n');
}
