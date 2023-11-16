#include <stdio.h>

void first(void)__atrribute__((constructor));

/**
 * first - A funct that prints a sentence before the main
 * function is executed
 */

void first(void)
{
	printf("You're beat! And yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
