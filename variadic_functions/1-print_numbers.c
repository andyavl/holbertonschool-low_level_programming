#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums all arguments
 * @n: numbers
 * Return: sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, x;

	if (n != 0)
	{
		va_start(nums, n);
		for (i = 0; i < n; i++)
		{
			x = va_arg(nums, int);
			printf("%d", x);
			if (separator != NULL && (i + 1) < n)
				printf("%s", separator);
		}
		printf("\n");
		va_end(nums);
	}
}
