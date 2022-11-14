#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - entry point
 * @argc: args count
 * @argv: args vector
 *
 * Return: 1 0r 0
 */
int main(int argc, char *argv[])
{
	int fd, fd2, wr, rd;
	char *buf;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_APPEND | O_WRONLY, 0664);
	do
	{
		rd = read(fd, buf, 1024);
		if (fd == -1 || rd == -1)
		{
			fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = dprintf(fd2, "%s", buf);
		if (fd2 == -1 || wr == 0)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (rd == 1024);

	free(buf);
	if (close(fd) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	if (close(fd2) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}

	return (0);
}
