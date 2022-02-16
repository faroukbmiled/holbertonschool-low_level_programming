#include "main.h"
/**
 * _strcat -function that concatenates 2 strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i, x;
i = 0;
x = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[x] != '\0')
{
dest[i] = src[x];
x++;
i++;
}
return (dest);
}
