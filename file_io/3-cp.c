#include "main.h"

/**
 * main - program that copies a file
 * @ac: number of arguments
 * @av: arguments
 * Return: 0
 */
int main(int ac, char *av[])
{
	int flfrom, flto, cfrom, cto, r;
	char buf[BUFSIZ];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	flfrom = open(av[1], O_RDONLY);
	if (flfrom == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	flto = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((r = read(flfrom, buf, BUFSIZ)) > 0)
	{
		if (flto == -1 || r != (write(flto, buf, r)))
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (r == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	cfrom = close(flfrom);
	if (cfrom == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", av[1]), exit(100);
	cto = close(flto);
	if (cto == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", av[2]), exit(100);
	return (0);
}
