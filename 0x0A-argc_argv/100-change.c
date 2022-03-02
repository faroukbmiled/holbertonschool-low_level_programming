#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount of money.
 * @argc: int
 * @argv: string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i, n, x, j = 0;
int chr[] = {25, 10, 5, 2, 1};
if (argc != 2)
printf("Error\n");
return (1);
}
x = atoi(argv[1]);
if (x < 1)
printf("0\n");
else
{
for (i = 0; i < 5 && x; i++)
{
n = x / chr[i];
j += n;
x -= n * chr[i];
}
printf("%d\n", j);
}
return (0);
}
