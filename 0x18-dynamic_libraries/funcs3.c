#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: source string to be appende
 * @dest: destination string
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int b;
	int end = 0;

	while (dest[end] != '\0')
	{
		end++;
	}
	for (b = 0; src[b] != '\0'; b++)

		dest[end + b] = src[b];

	return (dest);
}
/**
 * _strncat - concatenates two strings uses at most n bytes fron src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes used from source string
 *
 * Return: pointer to resulting dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int b = 0;
	int end;

	while (dest[b] != '\0')
	{
		b++;
	}
	for (end = 0; end < n && src[end] != '\0'; end++)
	{
		dest[end + b] = src[end];
	}
	dest[end + b] = '\0';
	return (dest);
}
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: string to be appended on dest
 * @n: number of bytes from src
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i]  = '\0';
	}
	return (dest);
}
/**
 * _strcmp - compares pointers to two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: 0 if the strings are equal, positive or negative difference if
 * they are not
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff;

	while (s1[i] && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
		{
			diff = s1[i] - s2[i];
			i++;
		}
		return (diff);
	}
}
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to a memory area
 * @b: byte to be filled at s
 * @n: number of bytes to be filled at s
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *mem = s;
	char value = b;

	for (i = 0; i < n; i++)
		mem[i] = value;

	return (mem);
}
