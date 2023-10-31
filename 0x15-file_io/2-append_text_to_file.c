#include "main.h"

/**
 * append_text_to_file - adds to an existing file
 * @filename: the file to be appended
 * @text_content: the info to be appended
 * Return: 1 on success -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		if (write(fd, text_content, len) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
