#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a an index
 * @n: value
 * @index: index
 * Return: 1 if works or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8 - 1)
return (-1);
*n = *n | (1 << index);
return (1);
}
