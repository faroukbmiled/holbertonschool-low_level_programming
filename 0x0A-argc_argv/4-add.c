#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*main - adds positive numbers.
*@argc: integer
*@argv: string.
*Return: 0
*/
int main(int argc, char *argv[])
{
int i, n, x;
i = 1;
n = 0;
x = 0;
while (i < argc)
{
while (n < argv[i][n])
{
if (!(argv[i][n] >= '0' && argv[i][n] <= '9'))
{
printf("Error\n");
return (1);
}
n++;
}
x += atoi(argv[i]);
i++;
}
printf("%d\n", x);
return (0);
}
