#include "hash_tables.h"
#include <string.h>

/**
 * key_index - gives the index of a key
 * @key: is the key
 * @size: size of the array of the hash table
 *
 * Return: Index at which the key/value pair should be stored
 * in the arrray of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

