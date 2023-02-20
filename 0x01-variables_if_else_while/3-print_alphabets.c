#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';
	char alphaCaps = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	while (alphaCaps <= 'Z')
	{
		putchar(alphaCaps);
		alphaCaps++;
	}

	putchar('\n');

	return (0);
}
