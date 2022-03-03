#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocate an array
 * @nmemb:int
 * @size:int
 * Return:void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *chr;
unsigned int i;
if (size == 0 || nmemb == 0)
return (NULL);
chr = malloc(size * nmemb);
if (chr == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
{
chr[i] = '\0';
}
return (chr);
}
