#include <stdio.h>

/**
 * main - writes a string or letter.
 *
 * Return: value 0.
 *
 * printf - prints the size of various types.
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int o;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(o));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
