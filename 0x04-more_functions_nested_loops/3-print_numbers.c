#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9 followed by a newline
 *
 * Return: void
 */

void print_numbers(void)
{
	int n;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
	return (0);
}

