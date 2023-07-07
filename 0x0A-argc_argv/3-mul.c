#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 upon successful execution, 1 if there are not enough arguments.
 */
int main(int argc, char *argv[])
{
	int num1, num2, ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	ans = num1 * num2;
	printf("%d\n", ans);
	return (0);
}
