#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 upon successful execution, 1 if there is an error.
 */
int main(int argc, char *argv[])
{
	int i, number, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *ptr = argv[i];

		while (*ptr != '\0')
		{
			if (*ptr < '0' || *ptr > '9')
			{
				printf("Error\n");
				return (1);
			}
			ptr++;
		}
		number = atoi(argv[i]);
		sum += number;
	}
	printf("%d\n", sum);
	return (0);
}
