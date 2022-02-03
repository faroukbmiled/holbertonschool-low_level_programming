#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int longintType;
long long int longlongint;
float floatType;

printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of double: %zu bytes\n", sizeof(longintType));
printf("Size of double: %zu bytes\n", sizeof(longlongint));
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);
}
