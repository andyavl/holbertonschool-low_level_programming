#include "main.h"

/**
 * print_last_digit - prints last digit
 * @d: the input character to compare
 *
 * Return: returns the last digit
 */

int print_last_digit(int d)
{
	int lastDigit = d % 10;

	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}
	_putchar('0' + lastDigit);
	return (lastDigit);
}
