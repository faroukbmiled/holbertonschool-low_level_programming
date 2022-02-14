#include "main.h"
/**
* print_rev -prints a string, in reverse, followed by a new line
* @s: char
* Return: void
*/
void print_rev(char *s)
{
int l, i;
for (l = 0; s[l] != '\0'; l++)
{
continue;
}
i = l - 1;
for (l = i; l >= 0 ; l--)
{
_putchar(s[l]);
}
_putchar('\n');
return;
}
