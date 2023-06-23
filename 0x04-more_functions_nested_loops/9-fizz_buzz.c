#include <stdio.h>
/**
 * main - prints numbers from 1 to 100
 * Description:in place for multiples of 3 prints Fizz,
 * multiples of 5 prints Buzz both Multiples print FizzBuzz
 * Return: noting
 */
int main(void)
{
	int n;

	for (n = 1 ; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Buzz ");
		}
		else if (n % 5 == 0)
		{
			printf("Fuzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
