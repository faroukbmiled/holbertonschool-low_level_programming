#include "main.h"

/**
 * what - Finds the square root of two numbers
 *
 * @a: The number
 * @b: The number to test for the square root of @a
 *
 * Return: square root
 */

int what(int a, int b)
{
	if (b * b > a)
		return (-1);
	else
		return (what(a, b + 1));

	return (1);
}
/**
 * _sqrt_recursion - natural square root of a number
 * @n: integer to find sqrt of
 * Return: -1
 */

int _sqrt_recursion(int a , int b)
{
	if (b * b == a)
		return (b);
	return (what(a, b + 1));
}
