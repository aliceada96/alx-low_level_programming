#include "main.c"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be examined
 * Return: int length of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length +=  _strlen_recursion(s + 1);
	}
	return (length);
}
