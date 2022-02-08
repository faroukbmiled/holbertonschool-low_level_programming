#include "main.h"
/**
 * _islower(int c)- checks for lowercase character
 * @a: The character to check
 *
 * Return: 1 (Success)
 */
int _islower(int a)
{
	if (a <= 'z' && a >= 'a')
		return (1);
		else
			return (0);
}
