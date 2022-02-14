#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 */
void rev_string(char *s)
{
	int i, b, c, v;

	while (s[i] != '\0')
	{
		i++;
	}

	v = i;
	i = 0;
	c = v - 1;

	while (i < c)
	{
		c = s[i];
		s[i] = s[b];
		s[b] = c;
		i++;
		b--;
	}

}
