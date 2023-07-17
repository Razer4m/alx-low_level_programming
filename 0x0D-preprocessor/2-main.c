#include "main.h"
/**
 * main - Prints the name of the file it was compiled from, followed by a new line.
 * Return: ALways 0 if Success
 */
int main(void)
{
	const char *file_name = __FILE__;
	int i = 0;
	
	while (file_name[i] != '\0')
	{
		_putchar(file_name[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
