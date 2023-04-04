#include "lists.h"

/**
 * get_nodeint_at_index - diplays the nth node of a linked list
 * @head: pointer to the head node
 * @index: index of the node to be displayed starting at 0
 *
 * Return: NULL if nonexistent, else the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodes;

	for (nodes = 0; nodes < index; nodes++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
