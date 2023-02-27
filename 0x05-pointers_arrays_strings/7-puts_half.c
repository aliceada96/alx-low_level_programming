#include "main.c"

/**
 * puts_half - prints the second half of a string followed by a newline
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int a, b, end;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	end = a;
	b = end / 2;

	while (b <= end)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
