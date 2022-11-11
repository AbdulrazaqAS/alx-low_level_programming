#include "main.h"

/**
 * read_textfile - reads a file and print it
 * @filename: filename
 * @letters: num of letters to print
 *
 * Return: num of letters it could read, 0 o  failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf = NULL;
	ssize_t res;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	res = read(fd, buf, letters);

	close(fd);

	return (res);
}
