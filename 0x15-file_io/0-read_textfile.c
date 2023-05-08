#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads text file and prints it to the POSIX standard output.
 *
 * @filename: The name of the file to read.
 * @letters: The maximum number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buf = malloc(letters + 1);
	ssize_t num_read = read(fd, buf, letters);
	ssize_t num_written = write(STDOUT_FILENO, buf, num_read);

	if (filename == NULL)
		return (0);

	if (fd == -1)
		return (0);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	if (num_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	buf[num_read] = '\0';

	if (num_written != num_read)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (num_written);
}
