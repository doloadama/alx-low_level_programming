#include <stdio.h>

/**
 * test_it_out - a function to print before execution of the main function
 * the __attribute__ ((constructor))
 * Return: void 
 */

void first(void) __attribute__ ((constructor));

void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
