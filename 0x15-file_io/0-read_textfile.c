#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t ls)
{
	char *buffer;
	int fd;
	ssize_t b_read, b_written;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * ls);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	b_read = read(fd, buffer, ls);
	if (b_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	b_written = write(STDOUT_FILENO, buffer, b_read);
	if (b_written == -1 || b_written != b_read)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (b_written);
}
