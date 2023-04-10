#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and prints to POSIX stdout.
 * @filename: A pointer to the file name.
 * @letters: no of letters the
 *           function should read and print.
 *
 * Return: 0 If the function fails or filename is NULL 
 *  else actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}

