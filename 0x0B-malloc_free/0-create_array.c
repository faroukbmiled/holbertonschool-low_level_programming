#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array
 *@size:unsigned int
 *@c:char
 *Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *chr;
	unsigned int i;
    
	if (size == 0)
		return (NULL);
	chr = malloc(size * sizeof(c));
	if (chr == NULL)
		return (0);
	for (i = 0; i <= size; i++)
	{
		chr[i] = c;
	}
	return (chr);
}
