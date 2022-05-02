#include "main.h"
#include <stddef.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n, rw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	rw = write(fd, text_content, n);

	if (rw == -1)
		return (-1);

	close(fd);

	return (1);

}
