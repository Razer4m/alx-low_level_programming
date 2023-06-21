#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: program prints lowecase then upcase alphabet using ASCII codes
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower = 97;
	int upper = 65;

	while (lower < 123)
	{
		putchar(lower);
		lower++;
	}
	while (upper < 91)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
