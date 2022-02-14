#include "main.h"
/**
* _puts -prints a string, followed by a new linexã
* @str: char
* Return: void
*/
void _puts(char *str)
{
int len;
for (len = 0; str[len] != '\0'; ++len)
{
_putchar(str[len]);
}
_putchar('\n');
return;
}
