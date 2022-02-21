#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
* Return: a pointer to the byte that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, x;
for (i = 0; s[i] != 0; i++)
{
for (x = 0; accept[x] != '\0'; x++)
{
if (accept[x] == s[i])
{
return (s + i);
}
}
}
return (0);
}
