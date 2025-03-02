#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: input string
 */
void puts_half(char *str)
{
	int length;
	int n;

	for (length = 0; *str != '\0'; length++)
	str++;

	if (length % 2 != 0)
	n = (length + 1) / 2 - 1;
	else
	n = length / 2;

	str = str - n;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
