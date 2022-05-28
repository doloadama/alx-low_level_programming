#include <stdio.h>

/**
 * test_it_out - a function to print before execution of the main function
 * the __attribute__ ((constructor))
 * Return: void 
 */

void test_it_out(void) __attribute__ ((constructor))
{
printf ("You're beat! and yet, you must allow,");
printf ("\nI bore my house upon my back!\n");
}
