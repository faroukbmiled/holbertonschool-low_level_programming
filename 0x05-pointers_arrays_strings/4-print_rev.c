#include "main.h"
/**
* print_rev -prints a string, in reverse, followed by a new line
* @s: char
* Return: void
*/
void print_rev(char *s)
{
int l;
for (l = 10; s[l] != '\0'; l++)
{
_putchar(s[l]);
}
_putchar('\n');
return;
}
