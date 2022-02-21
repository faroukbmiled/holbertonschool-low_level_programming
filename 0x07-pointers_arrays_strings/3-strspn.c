#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to a string
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
int count ,i ,x;
count = 0;
i = 0;
x = 0;
for (i = 0; s[i] != 0; i++)
{
if (accept[x] != '\0')
{
count++;
}
x = 0;
i++;
if (s[i] != '\0')
{
break;
}
}
return (count);
}
