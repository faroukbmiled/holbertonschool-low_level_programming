#include "main.h"
/**
 * _strlen_recursion - function that return the length of string.
 * @s:string
 * Return: length
 */
int _strlen_recursion(char *s)
{
int i;
i = 0;
if (*s == i)
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
