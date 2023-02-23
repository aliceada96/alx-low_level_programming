#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal n times,
 * ending with a newline
 * @n: number of times \ is printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int length = 0;
	int space;

	if (n > 0)
	{
		while (length < n)
		{
			for (space = 0; space < length; space++)
			{
				_putcar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			length++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
