#include "main.h"
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
				index++;
			} while (haystack[i] == needle[i])
		}
		haystack++;
	}
}
