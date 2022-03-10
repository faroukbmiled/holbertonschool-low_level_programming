#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_strings - function that prints strings,
 *                 followed by a new line.
 * @n: number of arguments.
 * @separator: separator string.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *chr;
va_list va;
va_start(va, n);
for (i = 0; i < n; i++)
{
chr = va_arg(va, char*);
if (chr != NULL)
printf("%s", chr);
else
printf("(nil)");
if (separator != NULL && i != n - 1)
printf("%s", separator);
}
va_end(va);
printf("\n");
}
