#include "main.h"
/**
 * _puts_recursion - function that prints a string.
 * @s:string
 * Return: none
 */
void _puts_recursion(char *s)
{
while (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
}
}
