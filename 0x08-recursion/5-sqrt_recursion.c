#include "main.h"

/**
 * what - Finds the square root of two numbers
 * @a: The number
 * @b: The number to test for the square root of @a
 * Return: square root
 */

int what(int a, int b)
{
	if (b * b > a)
		return (-1);

	else if (b * b == a)
		return (b);

	else
		return (what(a, b + 1));
}

/**
 * _sqrt_recursion - find if a number is a natual square root
 * @n: number to evaluate
 * Return: The Square root, or -1
 */
int _sqrt_recursion(int n)
{
	return (what(n, 1));
}
