#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
