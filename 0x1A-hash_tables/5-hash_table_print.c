#include "hash_tables.h"
#include <strings.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: key/value in the order they appear in the ht,
 * if table is empty/NULL dont print anything
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			flag = 1;

		}
	}
	printf("}\n");
}

