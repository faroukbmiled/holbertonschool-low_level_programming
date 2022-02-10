#include "main.h"
/**
* print_diagonal -diagonal line.
* @n: integer.
* Return:line.
*/
void print_diagonal(int n)
{
int i, b;

i = 0;
if (n > 0)
{
while (i < b)
{
b = 0;
while (b < i)
{
_putchar(' ');
b++;
}
b++;
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
