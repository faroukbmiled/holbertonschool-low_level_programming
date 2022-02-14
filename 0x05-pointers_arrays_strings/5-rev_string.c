#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 */
void rev_string(char *s)
{
int i, j;
char a;
i = 0;
j = 0;
while (*(s + i))
{
*(a + i) = *(s + i);
i++;
}
i = i - 1;
while (i >= 0)
{
*(s + i) = *(a + j);
j++;
i--;
}
}
