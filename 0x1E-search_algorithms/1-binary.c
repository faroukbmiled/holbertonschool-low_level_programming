#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 *@array: pointer of element
 *@size: number of element
 *@value: value to search
 *Return: index
 */
int binary_search(int *array, size_t size, int value)
{
size_t i, n = 0, j;
if (!array)
return (-1);
for (n = 0, j = size - 1; j >= n;)
{
printf("Searching in array: ");
for (i = n; i < j + 1; i++)
{
if (i == n)
printf("%d", array[i]);
else
printf(", %d", array[i]);
}
printf("\n");
i = n + (j - n) / 2;
if (array[i] == value)
return (i);
if (array[i] > value)
j = i - 1;
else
n = i + 1;
}
return (-1);
}
