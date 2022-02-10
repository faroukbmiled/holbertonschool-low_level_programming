#include "main.h"
/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
int i, n;
for (i = 0; i < 10; i++)
{
for (n = 0; n < 15; n++)
{
if (n >= 10)
_putchar((n / 10) + 48);
_putchar((n % 10) + 48);
}
_putchar('\n');
}
}
