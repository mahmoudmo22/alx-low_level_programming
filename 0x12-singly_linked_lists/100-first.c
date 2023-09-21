#include <stdio.h>
void first_to_print(void) __attribute__ ((constructor));

/**
 * first_to_print - executed before main
 */
void first_to_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
