#include <stdio.h>
/**
 * main - execute before main
 * Return: no return.
 */
void exec_first(void) __attribute__ ((constructor));
void exec_first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}