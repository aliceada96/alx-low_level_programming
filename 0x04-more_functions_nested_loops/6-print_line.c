#include "main.h"

/**
 * print_line - prints a line of _ n length
 * @n: length of line
 *
 * Return: void
 */
void print_line(int n)
{
	int length = 0;

	while (length < n)
	{
		_putchar('_');
		length++;
	}
	_putchar('\n');
}
