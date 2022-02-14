#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string
 */
void rev_string(char *s)
{
char chr;
int i = 0;
int b = 0;
while (s[b++])
i++;
for (b = i - 1; b >= i / 2; b--)
{
chr = s[b];
s[b] = s[i - b - 1];
s[i - b - 1] = chr;
}
}
