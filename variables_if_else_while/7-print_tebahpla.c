#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the alphabet in reverse
 * Return: value 0.
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	putchar(c);
	putchar ('\n');

	return (0);
}
