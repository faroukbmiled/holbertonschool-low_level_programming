#include "main.h"
/**
* print_rev -prints a string, in reverse, followed by a new line
* @s: char
* Return: void
*/
void print_rev(char *s)
{
int l, i;
for (l = 0; s[l] != '\0'; ++l)
i = l - 1;
for (i = l; i >= 0; --i)
{
_putchar(s[i]);
}
return;
}
