#include <stdio.h>

void __attribute__((constructor)) p_first(void);

/**
 * p_first - Prints a string before the
 *        main function is executed.
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
