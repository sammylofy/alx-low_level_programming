#include "main.h"
/**
 * read_textfile - Reads a text file and
 * prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;  /* File descriptor */
	ssize_t read_bytes, write_bytes;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_bytes = read(fd, buffer, letters);
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	free(buffer);
	close(fd);

	if (write_bytes != read_bytes)
		return (0);

	return (write_bytes);
}
