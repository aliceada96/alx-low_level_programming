#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node of listint_t
 * @head: head to be deleted
 *
 * Return: head node's data n
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
