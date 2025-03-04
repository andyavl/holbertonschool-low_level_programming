#include "main.h"

/**
 * *string_toupper - all string turns uppercase
 * @s: string
 * Return: returns uppercase string
 */
char *string_toupper(char *s)
{
	char az;
	char azU;
	int i;

	for (azU = 'A', az = 'a'; az <= 'z'; azU++, az++)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == az)
				s[i] = azU;
		}
	}
	return (s);
}
