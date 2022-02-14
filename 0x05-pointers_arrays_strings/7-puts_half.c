#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string to print half
 */
void puts_half(char *str)
{
int a, b;
a = 0;
while (str[a])
b++;
b = a / 2;
if (a % 2)
b += 1;
while (b < a)
{
_putchar(str[b]);
b++;
}
_putchar('\n');
}
