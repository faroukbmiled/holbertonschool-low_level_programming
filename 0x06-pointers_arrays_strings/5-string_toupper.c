#include "main.h"

/**
 * string_toupper - lowercase letters of a string to uppercase
 * @string:  string
 * Return: change for uppercase
 */
char *string_toupper(char *string)
{
int i;
for (i = 0;  string[i] != '\0'; i++)
{
if (string[i] >= 'a' && string[i] <= 'z')
string[i] = string[i] - 32;
}
return (string);
}
