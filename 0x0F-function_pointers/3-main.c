#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int i, x;
char *chr;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
i = atoi(argv[1]);
chr = argv[2];
x = atoi(argv[3]);
if (get_op_func(chr) == NULL || chr[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*chr == '/' && x == 0) ||
(*chr == '%' && x == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(chr)(i, x));
return (0);
}
