#include <limits.h>
/**
 * _atoi - convers a string to an integer
 * @s: input string
 * Return: returns convertion
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i;
	int p;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (s[i] == '+')
		{
			i++;
		}
	}
	for (p = 0; (s[p] < '0' || s[p] > '9') && (s[p] != '\0'); p++)
	{
		result = result * 10 + (s[p] - '0');
	}
	return (sign * result);
}

