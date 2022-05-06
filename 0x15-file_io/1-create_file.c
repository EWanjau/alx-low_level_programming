include "main.h"

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
	char *buff;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		fd = open(filename, O_WRONLY|O_CREAT|O_TRUNC, 600);
		close(fd);
		return (1);
	}
	while(text content)
	{
		len++;
	}
	fd = open(filename, O_WRONLY|O_CREAT|O_TRUNC, 600);

	buff = malloc(sizeof(char)* len);

	n = read(STDIN_FILENO, buff, len);

	write(STDOUT_FILENO, buff, n);
	close(fd);

	return (n);
}
