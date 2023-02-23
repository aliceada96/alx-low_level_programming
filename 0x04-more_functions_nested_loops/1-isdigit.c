#include "main.h"
/**
 * _isdigit - checks if c is a digit
 * @c: character that is checked
 *
 * Return: 1 if its a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
