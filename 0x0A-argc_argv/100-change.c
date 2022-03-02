#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints amount of money.
 * @argc: int
 * @argv: string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i, n, j, x = 0;
int chr[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
j = atoi(argv[1]);
if (j < 1)
printf("0\n");
else
{
for (i = 0; i < 5 && j; i++)
{
n = j / chr[i];
x += n;
j -= (n *chr[i]);
}
printf("%d\n", x);
}
return (0);
}
