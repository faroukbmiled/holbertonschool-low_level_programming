#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 */
void rev_string(char *s)
{
int a, x, b, v;
while (s[a] != '\0')
{
a++;
}
v = a;
a = 0;
x = v - 1;
while (a < x)
{
b = s[a];
s[a] = s[x];
s[x] = b;
a++;
x--;
}
}
