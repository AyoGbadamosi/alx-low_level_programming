#include "main.h"
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard
 * output
 * @filename: name of file
 * @letters: number of letters it should read and print
 * Return: 0 or actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t i, j;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	i = read(fd, buf, letters);
	j = write(STDOUT_FILENO, buf, i);

	close(fd);

	free(buf);

	return (j);
}
