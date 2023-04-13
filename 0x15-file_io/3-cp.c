#include "main.h"
#include <stdio.h>

/**
 * main - copies file contents into another file
 * @argc: argument count
 * @argv: pointer to arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int dest, source, r;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source = open(argv[1], O_RDONLY);

	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	r = read(source, buffer, 1024);

	while (r > 0)
	{
		if (dest == -1 || write(dest, buffer, r))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

	}
	if (close(source) == -1 || close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
	}
	return (0);
}
