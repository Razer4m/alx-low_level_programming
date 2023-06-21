#include <stdio.h>
/**
 * main - Entry point for the function
 * Description: printing alphabet in lowercase using ASCII codes
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower = 97;

	while (lower <= 122)
	{
		putchar(lower++);
	}
	putchar('\n');
	return (0);
}
