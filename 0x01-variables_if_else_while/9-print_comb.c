#include <stdio.h>
/**
 * main - entry point
 * Description: prints single digits numbers separated by comma
 * Code uses ASCII codes
 * Return: Always 0
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n == 57)
		{
			break;
		}
		putchar(44);
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
