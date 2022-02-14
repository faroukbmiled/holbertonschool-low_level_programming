#include "main.h"
/**
* swap_int -swapes two int
* @a: variable
* @b: variable
* Return: void
*/
void swap_int(int *a, int *b)
{
*a = *a - *b;
*b = *a + *b;
*a = *b - *a;
}
