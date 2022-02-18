#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @string: the string to encode
 * Return: encode string
 */
char *rot13(char *string)
{
int i, x;
char c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
i = 0;
while (string[i] != '\0')
{
x = 0;
while (c[x] != '\0')
{
if (string[i] == c[x])
{
string[i] = rot13[x];
break;
}
x++;
}
i++;
}
return (string);
}
