#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int d;
for (i = '0'; i <= '9'; ++i)
{
for (d = '0'; d <= '9'; ++d)
{
if (i != '0' || d != '0')
{
putchar(',');
putchar(' ');
}
putchar(i);
putchar(d);
}
}
putchar('\n');
return (0);
}
