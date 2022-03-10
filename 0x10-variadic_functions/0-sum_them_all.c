#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - the sum of all its_pa
 * @n: number of pa
 * Return: 0 if n is  0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list va;
unsigned int i;
int x = 0;
va_start(va, n);
for (i = 0; i < n; i++)
x = x + va_arg(va, int);
va_end(va);
return (x);
}
