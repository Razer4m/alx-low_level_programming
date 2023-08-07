#include "main.h"
/**
 * read_textfile - Read a text file and prints it to the POSIX
 * @filename: Pointer to the name fo the file to read.
 * @letters: NUmber of letters to read and print.
 * Return: Exact number of letters read and printed, 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_descriptor;
	ssize_t r_bytes, w_bytes;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	f_descriptor = open(filename, O_RDONLY);
	if (f_descriptor == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(f_descriptor);
		return (0);
	}
	r_bytes = read(f_descriptor, buffer, letters);
	close(f_descriptor);
	if (r_bytes == -1)
	{
		free(buffer);
		return (0);
	}

	w_bytes = write(STDOUT_FILENO, buffer, r_bytes);
	free(buffer);

	if (w_bytes != r_bytes)
	{
		return (0);
	}
	return (w_bytes)
}
