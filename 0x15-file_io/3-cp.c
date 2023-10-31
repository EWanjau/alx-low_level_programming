#include "main.h"

int _close(int fd);
int _cp(char *file_from, char *file_to);

/**
 *main - copy contents of file1 to file2
 *@argc: number of command line arguments
 *@argv: commandline arguments
 *Return: 0 if successful
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_cp(argv[1], argv[2]);

	return (0);
}

/**
 *_cp - copies the contents of a file to another file
 *@file_from: source file
 *@file_to: destination file
 *Return: 1 for success
 */
int _cp(char *file_from, char *file_to)
{
	int fd_r, fd_w, count;
	char buf[1024];

	fd_r = open(file_from, O_RDONLY);

	fd_w = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((count = read(fd_r, buf, 1024)))
	{
		if (fd_r == -1 || count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			_close(fd_w);
			exit(98);
		}
		if (fd_w == -1 || write(fd_w, buf, count) != count)
		{
			_close(fd_r);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	_close(fd_r);
	_close(fd_w);

	return (1);
}

/**
 * _close - closes opened files
 * @fd: the file descriptor
 * Return: 1 on success
 */
int _close(int fd)
{
	if (fd < 0)
		return (1);

	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (1);
}
