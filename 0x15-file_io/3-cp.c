#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * closeFD - closes a fildes
 * @fd: fildes
 *
 */
void closeFD(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_APPEND | O_WRONLY, 0664);
	do {
		rd = read(fd, buf, 1024);
		if (fd == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (rd < 1024)
			buf[rd] = '\0';
		wr = write(fd2, buf, rd);
		if (fd2 == -1 || wr == -1)
		{
			wr++;
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (rd == 1024);

	free(buf);
	closeFD(fd);
	closeFD(fd2);
	return (0);
}
