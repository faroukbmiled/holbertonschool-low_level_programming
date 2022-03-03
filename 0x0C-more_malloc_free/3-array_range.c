#include "main.h"
#include <stdlib.h>
/**
* array_range - creates an array of integers.
* @min: min.
* @max: max.
* Return: pointer.
**/
int *array_range(int min, int max)
{
int *chr;
int i = 0;
int x;
x = (max - min) + 1;
if (min > max)
return (NULL);
chr = malloc(((max - min) + 1) * sizeof(int));
if (chr == NULL)
return (NULL);
for (i = 0; i < x; i++)
{
chr[i] = min;
min++;
}
return (chr);
}

