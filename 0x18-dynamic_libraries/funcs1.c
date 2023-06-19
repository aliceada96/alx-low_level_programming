#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks for lowercase character
 * @c : Character to be checked
 *
 * Return: 1 if the character is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
/**
 * _isalpha - checks for alphabetic character
 * @c: is the character that is checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/**
 * _abs - function that computes absolute value of an integer
 * @n: the interger that is computed
 *
 * Return: absolute value of an integer
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
/**
 * _isupper - checks that an alphabet is uppercase
 * @c: character that is case checked
 *
 * Return: 1 if uppercase, O if not uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
