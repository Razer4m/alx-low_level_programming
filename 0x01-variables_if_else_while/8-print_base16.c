#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all the base 16 in lowecase suing ASCII codes
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
	int lower = 97;

	while (n <= 57)
	{
		putchar(n++);
	}
	while (lower <= 102)
	{
		putchar(lower++);
	}
	putchar('\n');
	return (0);
}
