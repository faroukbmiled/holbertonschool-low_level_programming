#include <stdio.h>
/**
*main - maine function
*Return: 0
*/
int main(void)
{
int d;

for (d = '0'; d <= '9'; ++d)
{
if (d != '0')
{
putchar(',');
putchar(' ');
}
putchar(d);
}
putchar('\n');
return (0);
}
