#include "main.h"

/**
 * read_textfile - reads a text file and prints ir to the POSIX
 * @filename: file to read and print
 * @letters: amount of letter to read and print
 * Return: amount of letters it could read and print or 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	return (w);
}
