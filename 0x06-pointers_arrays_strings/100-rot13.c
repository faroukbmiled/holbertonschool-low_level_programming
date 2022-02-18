#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @string: the string to encode
 * Return: encode string
 */
char *rot13(char *string)
{
int i, x;
x = 0;
i = 0;
char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
while (string[i] != '\0')
{
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
