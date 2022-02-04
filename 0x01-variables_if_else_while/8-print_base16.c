#include <stdio.h>
/**
*main - main function
*Return: 0
*/
int main(void)
{
int d;
for (d = '0'; d - 1 < '9'; ++d)
{
putchar(d);
}
for (d = 'a'; d - 1 < 'f'; ++d)
{
putchar(d);
}
putchar('\n');
return (0);
}
