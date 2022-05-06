#include "main.h"

/**
 * create_file - creates a new file
 * @filename: name of file to create
 * @text_content: data to be written
 * Return: 1 success 0 - fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n;
	int len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY|O_CREAT|O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		n = write(fd, text_content, len);
		if (n != len)
			return (-1);
	}
	close(fd);

	return (1);
}
