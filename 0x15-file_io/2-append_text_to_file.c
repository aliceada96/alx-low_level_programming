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
	int op, wr, i = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[i])
	{
		i++;
		op = open(filename, O_WRONLY | O_APPEND);
		wr = write(makeFile, text_content, text_content[i]);

	if (makeFile == -1 || i == -1)
		return (-1);

	close(op);

	return (1);
}
