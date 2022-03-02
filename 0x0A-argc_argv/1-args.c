#include <stdio.h>
/**
*main - function that prints the number of arguments passed into it.
*@argc: argument count.
*@argv: argument vector.
*Return: 0
*/
int main(int argc, char *argv[])
{
if (argc == 1)
printf("%d\n", argc - 1);
return (0);
}
