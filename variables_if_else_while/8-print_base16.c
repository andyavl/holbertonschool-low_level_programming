#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints numbers followed by lowercase
 * Return: value 0.
 */
int main(void)
{
	char n;
	char c;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
