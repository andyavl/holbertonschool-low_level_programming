#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14.
 */
void more_numbers(void)
{
	int n;
	int more = 0;

	while (more < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar('0' + (n / 10));
			}
			_putchar('0' + (n % 10));
		}
		_putchar('\n');
		more++;
	}
}
