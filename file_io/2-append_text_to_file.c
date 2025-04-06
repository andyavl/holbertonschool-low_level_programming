#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content to be added in the file
 * Return: 1 on success or -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ln, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);
	for (ln = 0; text_content[ln] != '\0'; ln++)
	{}
	w = write(fd, text_content, ln);
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
