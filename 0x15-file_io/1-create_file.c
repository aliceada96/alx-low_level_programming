#include "main.h"

/**
 * create_file - creates a filr
 * @filename: Name of file to create
 * @text_content: a null terminated string to write to the file
 *
 * Return: 1 on sucess,-1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int makeFile, wr;

	if (filename == NULL)
		return (-1);

	makeFile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (text_content != NULL)
	{
		int i = 0;

		while (text_content[i])
		{
			i++;
		}

		wr = write(makeFile, text_content, i);
	}

	if (wr == -1 || makeFile == -1)
	{
		close(makeFile);
		return (-1);
	}

	close(makeFile);
	return (1);
}
