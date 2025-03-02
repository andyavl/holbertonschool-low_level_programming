#include "main.h"

/**
 * *leet - encondes a string into 1337
 * @s: string
 * Return: returns encoded string
 */
char *leet(char *s)
{
	char lets[] = "aAeEoOtTlL";
	char nums[] = "43071";
	int i, j;

	for (i = 0; lets[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == lets[i])
				s[j] = nums[i / 2];
		}
	}
	return (s);
}
