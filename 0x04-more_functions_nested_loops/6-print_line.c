#include "main.h"

/**
 * print_line - prints a line of _ n length
 * @n: length of line
 *
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i = 1;

		while (i <= n)
		{
			_putchar('_');
			i++;
		}

	}
	_putchar('\n');
}
