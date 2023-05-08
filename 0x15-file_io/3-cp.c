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
	char buffer[BUFFER_SIZE];

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

	while ((r = read(source, buffer, BUFFER_SIZE)) > 0)
	{
		if (dest == -1 || write(dest, buffer, r) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(source);
			exit(99);
		}

	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(source) == -1 || close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
	}
	return (0);
}
