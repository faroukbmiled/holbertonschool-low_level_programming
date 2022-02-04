#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
for (i = 'a'; i - 1 < 'z'; ++i)
{
if ((i != 'q') && (i != 'e'))
{
putchar(i);
}
}
putchar('\n');
return (0);
}
