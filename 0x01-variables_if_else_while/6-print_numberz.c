#include <stdio.h>
/**
 * main - Entry point
 * Description: printing single value of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sbn = 0;

	while (sbn < 10)
	{
		putchar('0' + sbn);
		sbn++;
	}
	putchar('\n');
	return (0);
}
