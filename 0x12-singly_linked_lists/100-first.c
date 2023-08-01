#include <stdio.h>

void printLines(void) __attribute__((constructor));
/**
 * printLines - Prints a line before the main function
 */
void printLines(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
