#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: the string to print
 * @f: pointer to function
 * Return: function to pointer to print name
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
