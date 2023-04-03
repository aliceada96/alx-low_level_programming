#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of listint_t list
 * @h: pointer to the head of listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
