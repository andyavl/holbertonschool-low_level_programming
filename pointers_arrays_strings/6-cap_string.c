#include "main.h"

/**
 * *cap_string - Caps a string
 * @s: string
 * Return: returns uppercase string
 */
char *cap_string(char *s)
{
	char az, azU;
	char sep[] = {' ', '\t', '\n', ',', ';', '.',
					'!', '?', '"', '(', ')', '{', '}', '\0'};
	int i, j;

	for (azU = 'A', az = 'a'; az <= 'z'; azU++, az++)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; sep[j] != '\0'; j++)
			if (s[i - 1] == sep[j] && s[i] == az)
			{
				s[i] = azU;
			}
		}
	}
	return (s);
}
