#include "main.h"

/**
 * is_prime_number - looks if its prime
 * @n: number
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int i = n / 2;

	if (n <= 1)
		return (0);
	return (_prime(n, i));
}

/**
 * _prime - is it prime
 * @n: numbers
 * @i: begin
 * Return: is it prime or not
 */
int _prime(int n, int i)
{
	if (i <= 1)
		return (1);
	else if (n % i == 0)
		return (0);
	return (_prime(n, i - 1));
}
