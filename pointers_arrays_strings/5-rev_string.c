#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: input string
 */
void rev_string(char *s)
{
	int pi = 0;
	int ln;
	char temp;

	for (ln = 0; *s != '\0'; ln++)
	s++;

	s = s - ln;
	ln = ln - 1;

	while (pi < ln)
	{
		temp = s[pi];
		s[pi] = s[ln];
		s[ln] = temp;

		pi++;
		ln--;
	}
}
