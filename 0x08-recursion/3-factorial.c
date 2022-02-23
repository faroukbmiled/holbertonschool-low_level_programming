#include "main.h"
/**
 * factorial -given number
 * @n:argument
 * Return: the factorial of a given number, -1 if lower than 0
 */
int factorial(int n)
{
int r;
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
r = n * factorial(n - 1);
return (r);
}
