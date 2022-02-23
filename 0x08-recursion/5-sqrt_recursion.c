#include "main.h"
/**
 * helper - Finds the square root of two numbers
 * @a: The number
 * @b: The number to test for the square root of @a
 * Return: square root
 */
int _sqrt_recursion(int a ,int b)
{
int x;
if (b * b > a)
return (-1);
else if (b * b == a)
return (b);
else
x = helper(a, b + 1);
return (x);
return (1);
}
