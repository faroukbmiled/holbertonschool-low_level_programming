#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base
 * @y: power
 * Return: the power
 */
int _pow_recursion(int x, int y)
{
int r;
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else
{
r = x * _pow_recursion(x, y - 1);
return (r);
}
}
