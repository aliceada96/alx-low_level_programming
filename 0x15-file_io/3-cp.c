#include "main.h"
#include <stdio.h>

/**
 * main - copies content from one file to another
 * @argc: number of arguments
 * @argv: pointer to arguments
 *
 * Return: 0
 */
#define BUFFER_SIZE 1024

int main( int argc, char *argv)
{
	int source, destination, rd, wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_t\no", argv[0]);
		exit(97);
	}
	source = open(argv[1], O_RDONNLY);

	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	destination = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC 0664);

	if (destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}

	rd = read(source, buffer, 1024);

	while (rd > 0)
	{
		wr = write(destination, buffer, rd);
		
		if (wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(source) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
	}
	
	if (close(destination) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination);
		exit(100);
	}

	return (0);
}
