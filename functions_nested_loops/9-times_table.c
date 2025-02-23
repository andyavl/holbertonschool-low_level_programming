#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int nineh;
	int ninev;

	for (nineh = 0; nineh < 10; nineh++)
	{
		for (ninev = 0; ninev < 10; ninev++)
		{
			int result = nineh * ninev;

			if ((result / 10) != 0)
			{
				_putchar('0' + (result / 10));
			}
			else if (ninev > 0)
			{
				_putchar(' ');
			}
			_putchar('0' + (result % 10));
			if (ninev < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
