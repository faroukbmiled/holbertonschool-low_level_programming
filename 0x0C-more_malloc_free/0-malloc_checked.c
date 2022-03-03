#include "main.h"
/**
 * malloc_checked - mallocs memory asked, exits with code 98 when it fails
 * @b: var
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
void *v;
v  = malloc(b);
if (v == NULL)
exit(98);
return (v);
}
