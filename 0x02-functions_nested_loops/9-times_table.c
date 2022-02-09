#include "main.h"
/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
int a, r;
for (a = 0; a < 9; ++a)
{
for (b = 0; r < 9; ++r)
{
if (a * r > 9)
{
if (r == 0)
{
_putchar(',');
_putchar(' ');
}
_putchar((a * r) / 10 + '0');
_putchar((a * r) % 10 + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar((a * r) + '0');
}
}
_putchar('\n');
}
}
