#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: binary number
 * Return: converted number or 0 if string contains chars not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int sum;
sum = 0;
while (!b)
return (0);
if (*b)
{
if (*b < '0' || *b > '1')
return (0);
sum *= 2;
if (*b++ == '1')
sum += 1;
}
return (sum);
}
