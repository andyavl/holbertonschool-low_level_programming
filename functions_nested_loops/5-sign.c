#include "main.h"

/**
 * print_sign - prints a sign
 * @n: the input character to compare
 *
 * Return: 1 if its higher 0 if not
 */

int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n < '0' && n != 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
