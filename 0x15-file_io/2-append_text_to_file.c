#include "main.h"

/**
 * append_text_to_file - adds to an existing file
 * @filename: the file to be appended
 * @text_content: the info to be appended
 * Return: 1 on success -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, by = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		by = write(fd, text_content, len);
		if (by != len)
			return (-1);
	}
	close(fd);

	return (1);
}
