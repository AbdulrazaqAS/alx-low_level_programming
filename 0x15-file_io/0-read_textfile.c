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
	char *buf = malloc(sizeof(char) * letters);
	ssize_t rd, wr;

	if (!filename || !buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	if (rd == -1 || wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}


	free(buf);
	close(fd);

	return (wr);
}
