#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: int
 * @height:int
 * Return: a double pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
int i, x ,**in;
if (width <= 0 || height <= 0)
return (NULL);
in = (int **)malloc(sizeof(int *) * height);
if (in == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
in[i] = (int *)malloc(sizeof(int) * width);
if (in[i] == NULL)
{
for (x = 0; x < i; x++)
free(in[x]);
free(in);
return (NULL);
}
for (x = 0; x < width; x++)
{
in[i][x] = 0;
}
}
return (in);
}
