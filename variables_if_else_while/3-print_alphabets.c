#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the alphabet
 * Return: value 0.
 */
int main(void)
{
	char c;
	char cA;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (cA = 'A'; cA <= 'Z'; cA++)
	{
		putchar(cA);
	}

	putchar('\n');

	return (0);
}
