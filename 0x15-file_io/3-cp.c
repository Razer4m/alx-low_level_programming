#include "main.h"
/**
 * print_error_msg - Prints an error message and exits with a given exit code.
 * @msg: The error message format string.
 * @arg: The argument to substitute in the message.
 * @code: The exit code.
 */
void print_error_msg(const char *msg, const char *arg, int code)
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
	ssize_t b_read, b_written;

	if (argc != 3)
	{
		print_error_msg("Usage: cp file_from file_to\n", "", 97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error_msg("Error: Can't read from file %s\n", argv[1], 98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		print_error_msg("Error: Can't write to %s\n", argv[2], 99);
	}
	while ((b_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		b_written = write(fd_to, buf, b_read);
		if (b_written == -1)
			print_error_msg("Error: Can't write to %s\n", argv[2], 99);
	}
	if (b_read == -1)
	{
		print_error_msg("Error: Can't read from file %s\n", argv[1], 98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
