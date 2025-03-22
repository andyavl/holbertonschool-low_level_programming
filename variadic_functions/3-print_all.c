#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * type_char - prints char
 * @arg: arg to print
 */
void type_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * type_int - prints int
 * @arg: arg to print
 */
void type_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * type_float - prints float
 * @arg: arg to print
 */
void type_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * type_string - prints string
 * @arg: arg to print
 */
void type_string(va_list arg)
{
	char *text;

	text = va_arg(arg, char*);
	if (text == NULL)
		text = "(nil)";
	printf("%s", text);
}

/**
 * print_all - prints anything
 * @format: argument types
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int i = 0, j = 0;
	char *coma = "";

	search type[] = {
		{"c", type_char},
		{"i", type_int},
		{"f", type_float},
		{"s", type_string},
		{NULL, NULL}
	};
	va_start(arg, format);
	while (format && format[i])
	{
		while (type[j].src != NULL)
		{
			if (format[i] == *(type[j].src))
			{
				printf("%s", coma);
				type[j].f(arg);
				coma = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(arg);
}
