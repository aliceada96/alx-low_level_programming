#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: is the number that is checked
 *
 * Return: 1 if its greater than 0, 0 if its 0, -1 if its less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
