#include "main.h"

/**
 * reverse_array - reverses
 * @a: array of integers
 * @n: number
 */
void reverse_array(int *a, int n)
{
int i, x;
i = 0;
n = n - 1;
while (i < n)
{
    x = a[i];
    a[i] = a[n];
    a[n] = x;
    i++;
    n--;
}
