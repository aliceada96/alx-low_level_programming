#include "main.h"

/**
 * print_square - prints a square followed by a newline
 * @size: size of square
 *
 * Return: void
 */

void print_square(int size)
{
	int length;
	int width;

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
