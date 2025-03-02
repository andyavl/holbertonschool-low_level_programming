#include <limits.h>
/**
 * _atoi - convers a string to an integer
 * @s: input string
 * Return: returns convertion
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int found_number = 0;

	for (; *s; s++)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
		}
		else if (*s >= '0' && *s <= '9')
		{
			found_number = 1;
			if (result > (2147483647 - (*s - '0')) / 10)
			{
				return ((sign == 1) ? 2147483647 : -2147483648);
			}
			result = result * 10 + (*s - '0');
		}
		else if (found_number)
		{
			break;
		}
	}
	return (result * sign);
}
