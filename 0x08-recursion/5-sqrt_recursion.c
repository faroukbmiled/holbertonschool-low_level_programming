#include "main.h"
/**
 * checking - Finds the square root of two numbers
 * @a: The number
 * @b: The number to test for the square root of @a
 * Return: square root
 */
int checking(int a ,int b)
{
if (b * b > a)
return (-1);
else if (b * b == a)
return (b);
else
return (checking(a, b + 1));
return (1);
}
