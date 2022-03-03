#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - function that concatenates two strings.
* @s1: First string.
* @s2: Second string.
* @n: Unsigned integer.
* Return: concatenated string.
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int x;
x = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (n > strlen(s2))
n = strlen(s2);
s = malloc(sizeof(char) * (strlen(s1) + n + 1));
if (s == NULL)
return (NULL);
for (x = 0; x < (strlen(s1) + n); x++)
{
if (x < strlen(s1))
s[x] = s1[x];
else
s[x] = s2[x - strlen(s1)];
}
s[x] = '\0';
return (s);
}
