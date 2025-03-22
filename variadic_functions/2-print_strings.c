#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints string of arguments
 * @n: numbers of arguments
 * @separator: char to print in between arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *text;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		text = va_arg(arg, char*);
		if (text == NULL)
			text = "(nil)";

		printf("%s", text);
		if (separator != NULL && (i + 1) < n)
		printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
