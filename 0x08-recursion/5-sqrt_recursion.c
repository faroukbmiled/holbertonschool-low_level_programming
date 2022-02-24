#include "main.h"

/**
 * _strstr - Finds the square root of two numbers
 *
 * @a: The number
 * @b: The number to test for the square root of @a
 *
 * Return: square root
 */

char *_strstr(char a, char b)
{
	if (b * b > a)
		return (-1);

	else if (b * b == a)
		return (b);

	else
		return (_strstr(a, b + 1));

	return (1);
}
