#include "main.h"
/**
 * _strncat - two strings
 * @dest: input of string 1
 * @src: input of string 2
 * @n: times
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int x;
i = 0;
x = 0;
while (dest[i] != 0)
{
i++;
}
while (src[x] != 0 && x < n)
{
dest[i] = src[x];
i++;
x++;
}
return (dest);
}
