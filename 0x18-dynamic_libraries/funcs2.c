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

/**
 * _strlen - returns the length of a string
 * @s: the string being examined
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
/**
 * _puts - prints a string followed by a newline
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: destination
 * @src: source
 * Return: char copy of string
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; *(src + a) != '\0'; a++)
	{
		dest[a] = *(src + a);
	}
	dest[a] = '\0';

	return (dest);
}
/**
 * _atoi - converts a strin into an integer
 * @s: string to be converted
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *str;

	str = s;
	num = 0;
	sign = 1;

	while (*str != 0 && (*str < '0' || *str > '9'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	if (*str != 0)
	{
		do {
			num = num * 10 + (*str - '0');
			str++;
		} while (*str >= '0' && *str <= '9');
	}
	return (num * sign);
}
