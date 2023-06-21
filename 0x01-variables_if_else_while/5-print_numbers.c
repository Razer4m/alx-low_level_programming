#include <stdio.h>
/**
 * main - Entry point
 * Description: function print sinle values of base 10 using ASCII codes
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sbn = 48; /* singles base 10 numbers*/

	while (sbn <= 57)
	{
		putchar(sbn++);
	}
	putchar('\n');
	return (0);
}
