#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @string: the string to encode
 * Return: encode string
 */
char *rot13(char *string)
{
int i, x;
char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
i = 0;
x = 0;
for (i = 0;  string[i] != '\0'; i++)
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
