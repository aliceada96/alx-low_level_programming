#include "list.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given point
 * @idx: index pf the list where new node shld be added
 * @n: value of data to be inserted at new node
 * @head: pointer to the head of listint_t
 * Return: adress of new node, else null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
