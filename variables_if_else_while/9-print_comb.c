#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints numbers with commas followed by a space
 * Return: value 0.
 */
int main(void)
{
	char n;
	char c;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n <= '8')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
