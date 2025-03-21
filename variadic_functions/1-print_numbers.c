#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints arguments
 * @n: numbers
 * @separator: char to print in between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, x;

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
