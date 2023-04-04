#include "lists.h"

/**
 * sum_listint - sums allthe data of a linked list listint_t
 * @head: pointer to the head of the list
 *
 * Return: sum of data if empty zero
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
