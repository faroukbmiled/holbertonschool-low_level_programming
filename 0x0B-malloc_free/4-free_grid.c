#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2 dimensional grid
 * @grid: two dimensional grid
 * @height: height of the array
 * Return: a pointer to a 2 dimensional array of integers
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
