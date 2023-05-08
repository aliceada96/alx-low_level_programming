#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends texts at the end of a file
 * @filename: name of file
 * @text_content: Null terminated string to add at eof
 *
 * Return: 1 on success, -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, i = 0;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1)
		return (-1);

	if (text_content != NULL)
	{
		i = strlen(text_content);
		wr = write(op, text_content, i);

		if (wr != i)
		{
			close(op);
			return (-1);
		}
	}

	close(op);

	return (1);
}
