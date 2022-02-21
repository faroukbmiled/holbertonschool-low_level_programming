#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to a string
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
int count, i, x;
count = 0;
i = 0;
x = 0;
while (s[i] != '\0')
{
while (accept[x] != '\0')
{
if (accept[x] == s[i])
{
count++;
}
x++;
}
x = 0;
i++;
if (s[i] == ' ')
{
break;
}
}
return (count);
}
