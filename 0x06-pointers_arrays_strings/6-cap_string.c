#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @str: string
 * Return: address of s
 */
char *cap_string(char *str)
{
int i, x;
char c[] = {9, 32, 10, ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
for (i = 0;  str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (i == 0)
str[i] = str[i] - 32;
else
{
for (x = 0; x <= 12; x++)
{
if (c[x] == (str[i] - 1))
str[i] = str[i] - 32;
}
}
}
i++;
}
return (str);
}