#include "main.h"
/**
 * _strcpy - copies the string pointed to by src to buffer
 * @src: pointer to string
 * @dest: pointer to buffer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int n = 0;
int i;
while (src[n] != '\0')
{
n++;
}
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
i = i;
while (i <= n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
