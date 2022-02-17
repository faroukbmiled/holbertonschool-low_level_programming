#include "main.h"

/**
 * leet - encodes a string
 * @string: the string to encode
 * Return: the encode string
 */
char *leet(char *string)
{
int i, x;
char l[] = "aAeEoOtTlL";
char n[] = "4433007711";
i = 0;
x = 0;
while (string[i] != '\0')
{
while (l[x] != '\0')
{
if (string[i] == l[x])
{
string[i] = n[x];
}
x++;
}
i++;
}
return (string);
}
