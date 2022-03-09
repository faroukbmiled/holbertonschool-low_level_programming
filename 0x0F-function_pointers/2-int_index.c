#include "function_pointers.h"
/**
 *int_index - print the index of the array
 *@array:int
 *@size:size if arrays
 * @array: array of elements
 * @cmp: function pointer thaat takes an int
 * Return: return the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
for (x = 0 ; x < size ; x++)
{
if ((cmp)(array[x]) != 0)
{
return (x);
}
}
return (-1);
}
