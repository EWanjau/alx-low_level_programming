#include "main.h"

/**
 *read_textfile - reads a textfile
 *@filename: text file
 *@letters: count of text
 *Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, w;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	n = read(fd, buff, letters);
	if (n < 0)
	{
		free(buff);
		return (0);
	}
	buff[n] = '\0';
	close(fd);

	w = write(STDOUT_FILENO, buff, n);
	if (w < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);

	return (w);
}
