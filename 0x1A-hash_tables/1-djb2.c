#include "hash_tables.h"
#include <string.h>

/**
 * hash_djb2 - impliments the djb2 algorithm
 * @str: pointer to a string used to generate the hash value
 *
 * Return: Hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}

