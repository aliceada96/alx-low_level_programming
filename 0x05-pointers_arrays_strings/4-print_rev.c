#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline
 * @s: string to be reversed
 *
 * Return: void
 */
void print_rev(char *s);
{
	int n = 2;

	while (s[n] != '\0')
	{
		n++;
	}
	n--;

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
