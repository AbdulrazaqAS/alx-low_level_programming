#include "main.h"

/**
 * append_text_to_file - appends to a file
 * @filename: file name
 * @text_content: text to append
 *
 * Return: 1 on success, 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	else
		while (*(filename + len))
			len++;

	fd = open(filename, O_APPEND | O_WRONLY, 0400);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
