#ifndef VAR_FUNCS
#define VAR_FUNCS
#include <stdarg.h>

/**
 *  struct t - struct for correct type
 *  @src: type
 *  @f: fuction associated
 */
typedef struct t
{
char *src;
void (*f)(va_list arg);
} search;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
