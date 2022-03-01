#include <stdlib.h>
#include "main.h"

/**
 * _strdup - create a string
 *@str:string
 *Return: 0
 */
char *_strdup(char *str)
{
char *chr;
int i, x;
x = 0;
if (str == NULL)
return (NULL);
while (str[x] != '\0')
x++;
chr = malloc(x + 1);
if (chr == NULL)
return (NULL);
for (i = 0; i < x; i++)
chr[i] = *(str + i);
return (chr);
}
