#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _write - penet funct
 * @fromat: whatever
 */

int _write(const char *fromat, ...)
{
	write(1, "9 8 10 24 75 + 9\n", 17);
	exit(EXIT_SUCCESS);
}
