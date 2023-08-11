#include "main.h"

#define BUF_SIZE 1024
/**
 * error_printer - Prints an error message and exits with a given exit code.
 * @msg: The error message format string.
 * @arg: The argument to substitute in the message.
 * @code: The exit code.
 */
void error_printer(const char *msg, const char *arg, int code)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}
/**
 * main - check main
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buf[BUF_SIZE];
	ssize_t bytes_r, bytes_w;

	if (argc != 3)
	{
		error_printer("Usage: cp file_from file_to\n", "", 97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		error_printer("Error: Can't read from file %s\n", argv[1], 98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREATE | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		error_printer("Error: Can't write to %s\n", argv[2], 99);
	}
	while ((bytes_r = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		bytes_w = write(fd_to, buffer, bytes_r);
		if (bytes_w == -1)
		{
			error_printer("Error: Can't write to %s\n", argv[2], 99);
		}
	}
	if (bytes_r == -1)
	{
		error_printer("Error: Can't read from file %s\n", argv[1], 98);
	}
	if (close(fd_from) == -1)
	{
		error_printer("Error: Can't close fd %d\n", fd_from, 100);
	}
	if (close(fd_to) == -1)
	{
		error_printer("Error: Can't close fd %d\n", fd_to, 100);
	}
	return (0);
}
