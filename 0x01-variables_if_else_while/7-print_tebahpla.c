#include <stdio.h>
/**
 * main - Entry point of the function
 * Description: printing lowercase alphabet in reverse using ASCII codes
 * Return: Always 0 (Success)
 */
int main(void)
{
	int rlower = 122;

	while (rlower >= 97)
	{
		putchar(rlower--);
	}
	putchar('\n');
	return (0);
}
