#include <stdlib.h>
#include "main.h"

/**
 * str_concat - create a concat string
 *@s1:string
 *@s2:string
 *Return: 0
 */
char *str_concat(char *s1, char *s2)
{
char *chr;
int i, x, l1, l2;
if (s1 == NULL)
l1 = 0;
else
{
l1 = 0;
while (s1[l1] != '\0')
l1++;
}
if (s2 == NULL)
l2 = 0;
else
{
l2 = 0;
while (s2[l2] != '\0')
l2++;
}
chr = malloc(sizeof(char) * (l1 + l2 + 1));
if (chr == NULL)
return (NULL);
for (i = 0; i < l1; i++)
chr[i] = s1[i];
for (x = 0; x < l2; x++)
chr[l1 + x] = s2[x];
chr[l1 + l2] = '\0';
return (chr);
}
