#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: input string
 */
void rev_string(char *s)
{
	int i;
	int ln;
	char temp[500];

	for (ln = 0; *s != '\0'; ln++)
	s++;

	s = s - ln;



	for (i = 0; i < ln; i++)
	temp[i] = s[ln - i - 1];

	for (i = 0; i < ln; i++)
	s[i] = temp[i];
}
