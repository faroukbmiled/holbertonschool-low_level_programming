#include "main.h"
/**
*rswaps the values of two integers
*@a & @b: variable
*Return : void
*/
void swap_int(int *a, int *b)
{
a = a - b;
b = a + b;
a = b - a;
}
