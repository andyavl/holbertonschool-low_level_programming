#include "main.h"

/**
 * *_strcmp - compares two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: returns difference of first mismatch
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++)
	{}
	return (s1[i] - s2[i]);
}
