#include "main.h"
/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 * Return: A integer
 */
int _atoi(char *s)
{
int sg = 1;
unsigned int t = 0;
char chr = 0;
while (*s)
{
if (*s == '-')
sg = sg * -1;
if (*s >= '0' && *s <= '9')
{
chr = 1;
t = t * 10 + *s - '0';
}
else if (chr)
break;
s++;
}
if (sg < 0)
t = (-t);
return (t);
}
