#include <stdio.h>

/**
 * main - execute before main
 * Return: no return.
 */

void __attribute__ ((constructor)) main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}