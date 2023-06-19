#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: where copied bytes are stored
 * @src: memory area rom which bytes are copies
 * @n: number of bytes to be copied from source to dest
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *destination = dest;
	char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];

	return (dest);
}
/**
 * _strchr - locates a character in a string
 * @s: string to be examined
 * @c: character to be located
 * Return: pointer to the first occurence of c if found, NUll
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
/**
 * _strspn - gets the length of a prefix substring
 * @s: reference string
 * @accept: Has specific substring whose bytes are reurned if its the same as
 * the initial substring of s
 * Return: number of bytes in accept present in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int prefix = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				prefix++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (prefix);
		}
		s++;
	}
	return (prefix);
}
/**
 * _strpbrk - searches a string for any setof bytes
 * @s: reference string
 * @accept: contains bytes being located in string s
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * Null idf not present
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
/**
 * _strstr - locates a substring
 * @needle: substring to be located
 * @haystack: original string from which the substring is located
 * Return: pointer to the begining of the located substring, Null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}
	return ('\0');
}
