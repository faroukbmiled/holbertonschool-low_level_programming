#include "main.h"
/**
 * _sqrt_recursion - Finds the square root of two numbers
 * @a: The number
 * @b: The number to test for the square root of @a
 * Return: square root
 */
int _sqrt_recursion(int a ,int b)
{
if (b * b > a)
return (-1);
else if (b * b == a)
return (b);
else
return (_sqrt_recursion(a, b + 1));
return (1);
}
